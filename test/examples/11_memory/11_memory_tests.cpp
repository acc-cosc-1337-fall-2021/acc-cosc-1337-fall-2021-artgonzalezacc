#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test my vector Size function")
{
	Vector v(3);

	REQUIRE(v.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise copy")
{
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v.Size() == 3);
	REQUIRE(v1.Size() == 3);
}

TEST_CASE("Test my vector Size function with memberwise/stack/pointer privat vars copy")
{
	Vector v(3);//our constructor--Vector(std::size_t s)
	Vector v1 = v;//my copy constructor--Vector(const Vector& v);
	
	REQUIRE(v[0] == 0);
	
	v1[0] = 10;

	REQUIRE(v[0] == 0);
}

TEST_CASE("Test overwriting an existing class with a copy")
{
	Vector v(3);//our constructor--Vector(std::size_t s)
	Vector v1(3);//move assignment -Vector& operator=(const Vector& v);
	v1 = v;
	v[0] = 100;

	REQUIRE(v[0] != v1[0]);

	Vector* v2 = new Vector(3);
	//delete v2;//must call delete to clear dynamic memory
}

TEST_CASE("Test copy vector with std::move, move constructor")
{
	Vector v(3);//class constructor - Vector(std::size_t s);
	Vector v1 = std::move(v);//move constructor - Vector(Vector&& v)
	
	
}

TEST_CASE("Test copy vector w move no move assignment")
{
	Vector v(3);//class constructor - Vector(std::size_t s);
	v = get_vector();//move assignment - Vector& operator=(Vector&& v);
//	v[0] = 100;

//	REQUIRE(v[0] == 100);
}