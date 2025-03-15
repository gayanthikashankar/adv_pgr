#include <iostream>

class number{
    public: 
    int n;

    //constructor
    number(int set_n){
        n = set_n;
    }

    number operator+(const number &numA){
        std::cout<< "this->n: " << this->n << "\n";
        std::cout<< "numA.n: " << numA.n << "\n";
        return number(this->n + numA.n);
    }

    bool operator==(const number &numA){
        if(this->n == numA.n) return true;
        else return false;
    }
};

int main(){

    number a(10);
    number b(3);

    number c = a+b;

    std::cout <<"c: " << c.n << "\n";

    if(a==c) std::cout <<"a == c" << "\n";
    else std::cout <<"a != c" << "\n";


}