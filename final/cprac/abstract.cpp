/*
ABSTRACTION
- hiding the implementation details of a class
- only exposing the necessary parts of the class
(eg coffee machine)
- use abstract classes that has atleast one pure virtual function

*/

#include <iostream>
using namespace std;

class smartphone {
    public:
    virtual void takePhoto() = 0; // pure virtual function and class becomes abstract
    //whoever inherits this class must implement this function in the derived class in their own way
};

class iPhone : public smartphone{
    public:
    void takePhoto() {
        cout << "Taking photo with iPhone" << endl;
    }
};

int main() {

    smartphone* s1 = new iPhone();
    s1 -> takePhoto();
    
};