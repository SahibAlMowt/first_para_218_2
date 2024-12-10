#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "calc.h"

TEST_SUITE("easy")
{
	TEST_CASE("Testing addition")
	{
		CHECK(add(1, 1) == 2);
		CHECK(add(1, 321) == 322);
		CHECK(add(1, -1) == 0);
	}


	TEST_CASE("Testing sub")
	{
		CHECK(sub(1, 1) == 0);
		CHECK(sub(1, 5) == -4);
		CHECK(sub(3, 1) == 2);
	}
}

TEST_CASE("Testing dev")
{
	CHECK(dev(5 , 4) == 1.25);
	CHECK(dev(0 , 9) == 0);
	CHECK(dev(10 , 2) == 5);
	
	REQUIRE(22.0/7 == doctest::Approx(3.141).epsilon(0.01));
}
