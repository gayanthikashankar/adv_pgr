#include <iostream>
#include <string>
using namespace std;

/*
friend fn: access to private and protected members of a class

*/

class ET{
    private:
    float a;
    float circumference;
    float area;

    public:
    void setA(float a){
        this->a = a;
        circumference = 3 * a;
        area = (1.73 * a * a) /4;
    }

    friend void PrintET(ET);
     
};

//friend function
//friend function is not a member of the class
void PrintET(ET et){
    cout<<"Circumference: " << et.circumference << endl;
    cout<<"Area: " << et.area << endl;
}

int main() {
    ET et;
    et.setA(5);

    /* error: private mmebers fo a class cant be accesses outside the class-- use friend fn
    cout<<"Circumference: " << et.circumference << endl;
    cout<<"Area: " << et.area << endl;
    */
    PrintET(et); 


}

