#include <iostream>
#include "funcs.h"

// add functions here

std::string removeLeadingSpaces(std::string line){
  std::string newstr = "";
  bool startadd = false;
  bool restart = false;
  for(int i = 0; i < line.length(); i++){
    char newchar = line[i];
    if(restart == false){
      if(!isspace(newchar)){
        startadd = true;
      }
      if(startadd == true && newchar != '\n'){
        newstr += newchar;
      }
    }
    if(newchar == '\n'){
      newstr += newchar;
      restart = true;
      startadd = false;
    }
    if(restart == true){
      if(!isspace(newchar)){
        startadd = true;
      }
      if(startadd == true){
        newstr += newchar;
      }
    }
  }
  return newstr;
}
