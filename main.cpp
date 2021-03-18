#include <iostream>
#include "funcs.h"
#include "iterator"

int main()
{
  std::string line{std::istreambuf_iterator<char>(std::cin), {}};
  std::string teststring = removeLeadingSpaces(line);
  std::cout << indent(teststring);
  return 0;
}
