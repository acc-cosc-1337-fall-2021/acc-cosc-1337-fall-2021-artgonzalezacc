#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string value, reference, and const reference")
{
	string s1 = "abc";
	string s2 = "def";
	string s3 = "ghi";

	my_strings(s1, s2, s3);

	REQUIRE(s1 == "abc");
	REQUIRE(s2 == "new string");
	REQUIRE(s3 == "ghi");
}
