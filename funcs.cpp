#include <iostream>
#include "funcs.h"

// add functions here

std::string removeLeadingSpaces(std::string line){
  std::string newstr = "";
  bool startadd = false;
  //std::ifstream necFile(line);
  //std::string wholeFile(std::istreambuf_iterator<char>(necFile),
  //std::istreambuf_iterator<char>());
  //std::cout << wholeFile;
  for(int i = 0; i < line.length(); i++){
    char newchar = line[i];
    //std::cout << newchar << "\n";
    if(!isspace(newchar)){
      startadd = true;
    }
    if(startadd == true){
      newstr += newchar;
    }
    if(newchar == '\n'){
      newstr += newchar;
    }
    //std::cout << "\n";
  }
  newstr += '\n';
  return newstr;
}
