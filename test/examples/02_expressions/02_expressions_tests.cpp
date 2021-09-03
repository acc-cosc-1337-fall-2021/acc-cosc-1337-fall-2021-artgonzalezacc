#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "data_type_size.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator precedence ", "order of ops-no parenthesis") 
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
	REQUIRE(operator_precedence_1(12, 6, 3) != 6);
}

TEST_CASE("Verify operator precedence 2", "order of ops-parenthesis") 
{
	REQUIRE(operator_precedence_2(12, 6, 3) == 6);
	REQUIRE(operator_precedence_2(12, 6, 3) != 14);
}

TEST_CASE("Verify convert to double to int", "int casted to double automatically")
{
	//REQUIRE(convert_to_double(5, .05) == .25);
}

TEST_CASE("Verify convert int to double", "double decimal portion sliced")
{
	REQUIRE(convert_double_to_int(10.25) == 10);
	REQUIRE(convert_double_to_int(10.51) == 10);
}

TEST_CASE("Verify convert double to int static case", "force conversion")
{
	REQUIRE(static_cast_double_int(10.59) == 10);
}

TEST_CASE("Test int is stores in 4 bytes of memory", "use sizeof")
{
	REQUIRE(int_data_size(15) == 4);
}

TEST_CASE("Test get area of cirlce", "uses constant PI")
{
	//REQUIRE(get_area_of_circle(10) == 314.159);
}
