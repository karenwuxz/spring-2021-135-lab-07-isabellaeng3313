#include <iostream>
#include <cctype>
#include <sstream>
#include "indent.h"
#include "unindent.h"

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


std::string indent(){
    std::string sentence = "";
    std::string line;
    // have the unindent version of the code be the input stream
    std::istringstream code(unindent());
    int num = 0;
    while(getline(code, line)){
        // if there is a closing braket, whole line needs to be unindent once
        if(countChar(line, '}') != 0){
            num --;
        }
        // add the correct amount of indents
        for(int j = 0; j < num; j++){
            sentence += '\t';
        }
        // updating amount of open brakets
        num += countChar(line, '{');
        sentence += line + '\n';
    }
    return sentence;
}
