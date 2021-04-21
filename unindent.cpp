#include<iostream>
#include<cctype>
#include<sstream>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
    std::string sentence = "";
    int spaces = 0;
  
    while(isspace(line[spaces])){
        spaces++;
    }
    for(int i = spaces; i < line.length(); i++){
        sentence += line[i];
    }
    return sentence;
} 


std::string unindent(){
    std::string sentence = "";
    std::string lines;
    while(getline(std::cin, lines)){
        sentence += removeLeadingSpaces(lines);
        sentence += "\n";
    }
    return sentence;
}