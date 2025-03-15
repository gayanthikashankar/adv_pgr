#include <iostream>

/*
const =tells the compiler we wont change something
if we try to change, throws error
computationally more efficient by not making copies
*/


int square( int const &i) {

  return i * i;

}

int main() {
  
  int side = 5;
  
  std::cout << square(side) << "\n";

}
