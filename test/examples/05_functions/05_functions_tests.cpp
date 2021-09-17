#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"

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
