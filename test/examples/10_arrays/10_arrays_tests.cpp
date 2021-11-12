#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_access.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Array List get current size")
{
	Array_List list;
	REQUIRE(list.get_current_size() == 0);

	list.add(3);
	REQUIRE(list.get_current_size() == 1);
}

TEST_CASE("Test Array List is empty")
{
	Array_List list;
	REQUIRE(list.is_empty() == true);
}

TEST_CASE("Test Array List add")
{
	Array_List list;
	REQUIRE(list.add(50) == true);
	REQUIRE(list.get_current_size() == 1);
	REQUIRE(list.add(5) == true);
	REQUIRE(list.get_current_size() == 2);
	REQUIRE(list.add(3) == true);
	REQUIRE(list.get_current_size() == 3);
	REQUIRE(list.add(10) == true);
	REQUIRE(list.get_current_size() == 4);
	REQUIRE(list.add(15) == true);
	REQUIRE(list.get_current_size() == 5);
	
	REQUIRE(list.add(5) == false);
	REQUIRE(list.get_current_size() == 5);
	
	std::vector<int> expected{50,5,3,10,15};
	std::vector<int> nums = list.to_vector();

	REQUIRE(nums == expected);

}

TEST_CASE("Test Array List clear")
{
	Array_List list;
	list.add(50);
	list.add(5);
	
	std::vector<int> expected{50,5};
	std::vector<int> nums = list.to_vector();

	REQUIRE(nums == expected);

	list.clear();
	REQUIRE(list.get_current_size() == 0);	

	expected.clear();
	nums = list.to_vector();	
	REQUIRE(nums == expected);
}

TEST_CASE("Test Array List get index of")
{
	Array_List list;
	list.add(50);
	list.add(5);
	list.add(3);
	list.add(10);
	list.add(15);

	REQUIRE(list.get_index_of(50) == 0);
	REQUIRE(list.get_index_of(10) == 3);
	REQUIRE(list.get_index_of(15) == 4);

	REQUIRE(list.get_index_of(16) == -1);
}

TEST_CASE("Test Array List get frequency of")
{
	Array_List list;
	list.add(50);
	list.add(5);
	list.add(3);
	list.add(10);
	list.add(15);

	REQUIRE(list.get_frequency_of(5) == 1);
}

TEST_CASE("Test Array List get frequency of count greater than 1")
{
	Array_List list;
	list.add(50);
	list.add(5);
	list.add(3);
	list.add(5);
	list.add(15);

	REQUIRE(list.get_frequency_of(5) == 2);
}

TEST_CASE("Test Array List contains")
{
	Array_List list;
	list.add(50);
	list.add(5);
	list.add(3);
	list.add(5);
	list.add(15);

	REQUIRE(list.contains(3) == true);
	REQUIRE(list.contains(25) == false);
}

TEST_CASE("Test Array List replace")
{
	Array_List list;
	list.add(50);
	list.add(5);
	list.add(3);
	list.add(5);
	list.add(15);

	REQUIRE(list.replace(15, 16) == true);
	REQUIRE(list.replace(20, 100) == false);

	std::vector<int> nums = list.to_vector();

	REQUIRE(nums[4] == 16);
}