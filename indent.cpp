#include <iostream>
#include <cctype>
#include <sstream>
#include "indent.h"

int countChar(std::string line, char c) {
   int i = 0;
   int counter = 0;
   
   while(line[i]) {
      
      if(line[i] == c) {
         counter++;
      }
      i++;
   }
   return counter;
}


std::string indent(int num){
    std::string sentence = "";
    if(num == 0){
        return sentence;
    }
    for(int i = 0; i < num; i++){
        sentence += "\t";
    }
    return sentence;
}
