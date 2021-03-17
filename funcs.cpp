#include <iostream>
#include "funcs.h"

// add functions here

int countChar(std::string line, char c){
  int count = 0;
  for(int i = 0; i < line.length(); i++){
    if(line[i] == c){
      count++;
    }
  }
  return count;
}

std::string indent(std::string line){
  std::string newstr = "";
  std::string currentLine = "";
  int indentCounter = 0;
  for(int i = 0; i < line.length(); i++){
    currentLine += line[i];
    if(line[i] == '\n'){
      if(currentLine[0] == '}'){
        indentCounter--;
        indentCounter--;
        //std::cout << indentCounter;
        //newstr += "here";
        //currentLine.erase(currentLine.length()-1);
        for(int i = 0; i < indentCounter; i++){
          currentLine.push_back('\t');
        }
      }else{
          indentCounter += countChar(currentLine, '{');
          for(int i = 0; i < indentCounter; i++){
            currentLine.push_back('\t');
          }
        }
        newstr += currentLine;
        currentLine = "";
    }
  }
  return newstr;
}

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
