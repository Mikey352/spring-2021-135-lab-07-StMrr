#include <iostream>
#include "funcs.h"

// add functions here
//function is used to count how many of a specified character there is
int countChar(std::string line, char c){
  int count = 0;
  //intitialization for count, serves as a counter
  for(int i = 0; i < line.length(); i++){
    if(line[i] == c){
      //if the letter in line is equal to this character, counter increases by 1
      count++;
      //if the letter in line is equal to this character, counter increases by 1
    }
  }
  return count;
}

std::string indent(std::string line){
  std::string newstr = "";
  std::string currentLine = "";
  //creates and initializes two strings. One for the new answer and the other to read the current line
  int indentCounter = 0;
  int lineCounter = 0;
  //creates and initializes two counters, one for indentation and the other to count the number of lines
  const char TABS = '\t';
  for(int i = 0; i < line.length(); i++){
    currentLine += line[i];
    if(line[i] == '\n'){
      if(currentLine[0] == '}'){
        newstr.erase(newstr.length()-1);
        indentCounter--;
        //subract 1 from indent counter if the line is a new line and the the letter is '}'
        for(int i = 0; i < indentCounter; i++){
          currentLine.insert(currentLine.length(), 1, TABS);
          //adds tabs to current line
        }
      }else{
          indentCounter += countChar(currentLine, '{');
          indentCounter -= countChar(currentLine, '}');
          //adds and subracts the number of } or { in the current line}
          for(int i = 0; i < indentCounter; i++){
              currentLine.insert(currentLine.length(), 1, TABS);
          }
        }
        newstr += currentLine;
        currentLine = "";
        lineCounter = lineCounter + 1;
    }
  }
  return newstr;
  //returns the new string
}
//function to remove the leading spaces
std::string removeLeadingSpaces(std::string line){
  std::string newstr = "";
  //creates and intializes a new string for the answer
  bool startadd = false;
  bool restart = false;
  for(int i = 0; i < line.length(); i++){
    char newchar = line[i];
    if(restart == false){
      if(!isspace(newchar)){
        startadd = true;
        //if the letter is not a space, the letter is added to newstr
      }
      if(startadd == true && newchar != '\n'){
        newstr += newchar;
      }
    }
    if(newchar == '\n'){
      //if the new char is a new line, it's added to the new string as well
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
        //adds newchar to newstr if the startadd is true
      }
    }
  }
  return newstr;
  //returns new string
}
