#include <iostream>

/*
pop is a ref to soda
whatever changes made to soda is reflected on pop as well
*/
int main(){
    int soda = 99;
    int &pop = soda;
    soda +=1;
    std::cout<<  soda << "\n";
    std::cout<<  pop << "\n";

}