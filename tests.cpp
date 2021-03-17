#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("removeLeadingSpaces base cases"){
  CHECK(removeLeadingSpaces("noSpace") == "noSpace");
  CHECK(removeLeadingSpaces("  some Leading Spaces") == "some Leading Spaces");
  CHECK(removeLeadingSpaces("   Multiple\n   lines\n   test") == "Multiple\nlines\ntest");
}
