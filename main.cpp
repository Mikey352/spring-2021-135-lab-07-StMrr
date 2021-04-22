#include <iostream>
#include "funcs.h"
#include "iterator"
//necessary librarires & header files
int main()
{
  std::string line{std::istreambuf_iterator<char>(std::cin), {}};
  //reads in from cin
  std::string teststring = removeLeadingSpaces(line);
  std::cout << indent(teststring);
  return 0;
  //tests with main and prints out answers
}
