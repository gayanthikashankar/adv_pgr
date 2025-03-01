/*
must be declared before they are used
distinguishable by '*'
eg: int* => pointer to int
*/

#include <iostream>

int main(){

    int powr = 9000;
    int* ptr = &powr;
    std::cout<< ptr<< "\n";

}