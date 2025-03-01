/*
& symbol is also used to get the mem address of an object

when & used in declaration: it is a ref operator
when & not used in declaration: it is an address operator

*/

#include <iostream>

int main() {
  
  int power = 9000;
  
  std::cout << power << "\n";
  
  std::cout << &power << "\n"; //memaddress of power
  
}