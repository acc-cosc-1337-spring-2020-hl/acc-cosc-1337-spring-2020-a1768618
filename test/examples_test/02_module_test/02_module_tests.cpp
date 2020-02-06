#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
}

TEST_CASE("Test get_generation function")
{
	REQUIRE(get_generation(1998) == "Centenial");
	REQUIRE(get_generation(1994) == "Millenial");
	REQUIRE(get_generation(1974) == "Generation X");
	REQUIRE(get_generation(1963) == "Baby boomer");
	REQUIRE(get_generation(1944) == "Silent Generation");
	REQUIRE(get_generation(0) == "Invalid Year");

}

TEST_CASE("Test menu function")
{
	REQUIRE(menu(1) == "Option 1"); 
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(5) == "Invalid Option");

}
