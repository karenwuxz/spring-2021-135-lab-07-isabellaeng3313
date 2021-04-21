#include <iostream>
#include "indent.h"
#include "unindent.h"

int main(){
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
  std::cout << indent() << std::endl;
  std::cout << unindent() << std::endl;
  return 0;
}
