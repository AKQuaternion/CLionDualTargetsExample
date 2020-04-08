//
// Created by Chris Hartman on 4/8/20.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Foo.hpp"

TEST_CASE( "Test Case name", "[aTag]" ) {
  REQUIRE(foo() == 13);
}
