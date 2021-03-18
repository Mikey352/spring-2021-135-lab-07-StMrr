#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("removeLeadingSpaces base cases"){
  CHECK(removeLeadingSpaces("noSpace") == "noSpace");
  CHECK(removeLeadingSpaces("  some Leading Spaces") == "some Leading Spaces");
  CHECK(removeLeadingSpaces("   Multiple\n   lines\n   test") == "Multiple\nlines\ntest");
}

TEST_CASE("countChar test cases"){
  CHECK(countChar("AaAaAbb", 'a') == 2);
  CHECK(countChar("Hello there", ' ') == 1);
  CHECK(countChar("!...", '.') != 4);
}

TEST_CASE("indent test cases"){
  CHECK(indent("aa{\n") == "aa{\n\t");
  CHECK(indent("""aa{\nTEST{\n""") == "aa{\n\tTEST{\n\t\t");
  CHECK(indent("shouldnt do anything here\n") == "shouldnt do anything here\n");
  CHECK(indent("""aa{\nBB{\nCC\n}\n}\n""") == """aa{\n\tBB{\n\t\tCC\n\t}\n}\n""");
}
