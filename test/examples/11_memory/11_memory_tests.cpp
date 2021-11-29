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
	Vector v(3);
	Vector v1(3);
	v1 = v;
	v[0] = 100;

	REQUIRE(v[0] != v1[0]);

	Vector* v2 = new Vector(3);
	//delete v2;//must call delete to clear dynamic memory
}

TEST_CASE("Test copy vector w move no move assignment")
{
	Vector v(3);
	v = get_vector();
	v[0] = 100;

	REQUIRE(v[0] == 100);
}