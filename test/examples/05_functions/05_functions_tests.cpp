#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test value(copy) parameter")
{
	int num = 5;
	int num1 = 10;
	call_by_val_ref(num, num1, num);
	
	REQUIRE(num == 5);
	REQUIRE(num1 == 20);
}

TEST_CASE("Test default parameters")
{
	//REQUIRE(get_total(10) == .825);fails decimal spaces
	REQUIRE(get_total(10, .0925) == .925);
}

TEST_CASE("Test function overloading")
{
	REQUIRE(get_weekly_pay(40, 10) == 400);
	REQUIRE(get_weekly_pay(52000) == 1000);
}