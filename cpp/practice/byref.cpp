/*
By value: creating copies of og value, switching values of x and y copies (creates 2 extra addresses)
By ref: memory address of value, use &, switching the values by swapping the addresses
*/

#include <iostream>

void swap(std::string &x, std::string &y);

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    std::string x = "Hello";
    std::string y = "World";

    swap(x,y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
}
