#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference and pointer parameters")
{
	int num1 = 10, num2 = 20;
	ref_ptr(num1, &num2);

	REQUIRE(num1 == 100);
	REQUIRE(num2 == 200);
}