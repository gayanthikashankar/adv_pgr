#include <iostream>
/*
~
object destroyed once used
*/
class number{

    private:
    double num;

    public:
    number(double num){
        this-> num = num;
        std::cout<< "constructor executing: "<< "\n";
        std::cout<< "number: "<< num <<"\n";
    }
    ~number(){
        std::cout<< "destructor executing: "<< "\n";
        std::cout<< "number: "<< num <<"\n";
    }

    
};

int main(){
    number n1(8);

}