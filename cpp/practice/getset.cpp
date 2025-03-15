#include <iostream>

/*
hide unecessary data from outside a class
getter = fn thta makes private attributes readable
setter = fn that makes private attributes writeable
*/

class stove{
    private:
    int temp = 0;

    public:
    getTemp(){
        return temp;
    }

    setTemp(int temp){
        if(temp <0){
            this-> temp = 0;
        }
        else if(temp > 10){
            this-> temp = 10;
        }
        else{
            this-> temp = temp;
        }
        
    }
};

int main(){

    stove s1;
    s1.setTemp(8000);
    std::cout<< "Stove temp: " << s1.getTemp() << "\n";
}