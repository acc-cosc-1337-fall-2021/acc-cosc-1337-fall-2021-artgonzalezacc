#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Logical Operators order of prec", "Higher to lower !, &&, ||")
{
	REQUIRE(logical_order_of_precedence(true, false, true) == false);
}

TEST_CASE("Test is overtime function", "40+ hours returns true")
{
	REQUIRE(is_overtime(20) == false);
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Test is even function", "4 returns t 5 f")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(9) == false);
}

TEST_CASE("Test get generation function", "")
{
	REQUIRE(get_generation(2015) == "Invalid Year");
	REQUIRE(get_generation(2014) == "Centenial");
	REQUIRE(get_generation(2005) == "Centenial");
	REQUIRE(get_generation(1996) == "Centenial");
	REQUIRE(get_generation(1995) == "Millenial");
	REQUIRE(get_generation(1976) == "Generation X");
	REQUIRE(get_generation(1946) == "Baby Boomer");
	REQUIRE(get_generation(1925) == "Silent Generation");
	REQUIRE(get_generation(1924) == "Invalid Year");
}

TEST_CASE("Test menu switch", "switch works like if else if")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
}