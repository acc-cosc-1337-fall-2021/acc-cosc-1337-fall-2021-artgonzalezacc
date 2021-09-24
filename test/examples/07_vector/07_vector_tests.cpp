#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test vector value, reference, and const reference")
{
	vector<int> n1 {1,2,3};
	vector<int> n2 {4,5,6};
	vector<int> n3 {7,8,9};

	vector<int> n1_expected {1,2,3};
	vector<int> n2_expected {200,5,6};
	vector<int> n3_expected {7,8,9};
	
	my_vectors(n1, n2, n3);

	REQUIRE(n1 == n1_expected);
	REQUIRE(n2 == n2_expected);
	REQUIRE(n3 == n3_expected);

}