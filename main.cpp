#include <iostream>
#include "funcs.h"
#include "iterator"

int main()
{
  std::string line{std::istreambuf_iterator<char>(std::cin), {}};
  //std::string line;
  //std::cin >> line;
  std::cout << removeLeadingSpaces(line);
    //std::cout << "banana" << "\n";
  //}
  return 0;
}
