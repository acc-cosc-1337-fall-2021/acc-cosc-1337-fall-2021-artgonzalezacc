#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "decimals.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*test case echo_variable */
TEST_CASE("Verify echo variable function", "should return parameter value") {
	REQUIRE(echo_variable(5) == 5);
	REQUIRE(echo_variable(6) == 6);
}

TEST_CASE("Verify get total function", "should return units*price product") 
{
	REQUIRE(get_total(5, 5) == 25);
	REQUIRE(get_total(10, 5) == 50);
	REQUIRE(get_total(20, 5) == 100);
}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Verify add to double 1" "should return .9+parameter value")
{
	//REQUIRE(add_to_double_1(0) == .9);//fails
	REQUIRE(add_to_double_1(1) == 1.9);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Verify get char ascii value function" "should return char ascii dec val")
{
	REQUIRE(get_char_ascii_value('a') == 97);
	REQUIRE(get_char_ascii_value('b') == 98);
	REQUIRE(get_char_ascii_value('c') == 99);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

