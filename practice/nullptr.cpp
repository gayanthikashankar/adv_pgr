#include <iostream>
/*
content not initialized

nullptr/NULL is a  keyword provides a typesafe pointer value representing an empty pointer
*/
int main(){

    int power = 9000;
    int* ptr = nullptr;
    ptr = &power;
    std::cout << ptr << "\n";
}

//prints: 0x7ffd02f87f2c