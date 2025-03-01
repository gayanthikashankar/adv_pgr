#include <iostream>

/*
deref used to obtain the value pointed to by a variable
precede the name of the ptr var with *

When * is used in a declaration, it is creating a pointer.
When * is not used in a declaration, it is a dereference operator.

*/

int main() {
  
  int power = 9000;
  
  //create ptr
  int* ptr = &power;
  
  //print ptr
  std::cout << ptr << "\n";
  
  //print *ptr
  std::cout<< *ptr << "\n";
  
}