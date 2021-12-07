#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"
#include "memory_leak.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test my vector Size function")
{
	Vector<int> v(3);

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise copy")
{
	Vector<int> v(3);
	Vector<int> v1 = v;

	REQUIRE(v.Size() == 3);
	REQUIRE(v1.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise/stack/pointer privat vars copy")
{
	Vector<int> v(3);//our constructor--Vector(std::size_t s)
	Vector<int> v1 = v;//my copy constructor--Vector(const Vector& v);
	
	REQUIRE(v[0] == 0);
	
	v1[0] = 10;

	REQUIRE(v[0] == 0);
}

TEST_CASE("Test overwriting an existing class with a copy")
{
	Vector<int> v(3);//our constructor--Vector(std::size_t s)
	Vector<int> v1(3);//move assignment -Vector& operator=(const Vector& v);
	v1 = v;
	v[0] = 100;

	REQUIRE(v[0] != v1[0]);

	Vector<int>* v2 = new Vector<int>(3);
	delete v2;//must call delete to clear dynamic memory
}

TEST_CASE("Test copy vector with std::move, move constructor")
{
	Vector<int> v(3);//class constructor - Vector(std::size_t s);
	Vector<int> v1 = std::move(v);//move constructor - Vector(Vector&& v)
	
	
}

TEST_CASE("Test copy vector w move no move assignment")
{
	Vector<int> v(3);//class constructor - Vector(std::size_t s);
	v = get_vector();//move assignment - Vector& operator=(Vector&& v);
//	v[0] = 100;

//	REQUIRE(v[0] == 100);
}

TEST_CASE("Function template test for add using ints")
{
	int val = add(5, 5);
	REQUIRE(val == 10);
}

TEST_CASE("Function template test for add using double")
{
	double val = add(10.5, 10.5);
	REQUIRE(val == 21);
}

TEST_CASE("Function template test for add using strings")
{
	string val = add(string("Joe "), string("Mary"));
	string expected_value("Joe Mary");
	
	REQUIRE(val == expected_value);
}