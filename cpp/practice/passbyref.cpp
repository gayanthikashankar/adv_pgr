#include <iostream>


/*
Pass-by-reference refers to passing parameters to a function by using references

- modify value of fn args
- avoid making copiesof variable/object

& = pass by ref
no & = passbyval
*/
int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  std::cout << triple(num) << "\n"; //3
  std::cout << triple(num) << "\n"; //9 (3 if passbyval)

}