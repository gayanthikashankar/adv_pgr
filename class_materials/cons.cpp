#include<iostream>
using namespace std;
class polynomial{
    int a;
    int b;
    int c;
    public:
    static int count;
    polynomial(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
        count++;
    }
    polynomial(int a,int b){
        this->a =a;
        this->b = b;
        this->c = 0; 
        count--;
    }
    polynomial(double a, double b, double c){
        this->a = a;
        this->b= b;
        this ->c= c;
        count++;
    }
    polynomial(){
        count++;
    }
    polynomial (polynomial& object){ //copy constructor
        a = object.a;
        b = object.b;
        c = object.c;
    }
void get_value(void);
~polynomial(){
    cout<<"Destructor has been called "<<endl;
}

};
void polynomial :: get_value(void){
    cout<<" the polynomial is : "<<a<<"x^2 + "<<b<<"x + "<<c<<"and count is "<<count<<endl;
}
int polynomial :: count;
int main(){
    polynomial p5(2,3,5);
    polynomial p1(p5);
    p5.get_value();
    p1.get_value();
    // p5.get_value();
    // {cout<<"inside a different scope"<<endl;
    //     polynomial p1(4.5,6.5,8.9);
    // p1.get_value();
    // polynomial p2(5,6);
    //     p2.get_value();

    // polynomial p3(3,4,5);
    // p3.get_value();

    // polynomial p4(void);
    
    // }
    // cout<<"out of scope "<<endl;
    return 0;
}