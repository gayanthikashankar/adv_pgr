//overload 
//can never access prvate data memebre and method in a class
//base class declarations can be accessed in rpivate and public key
//declared a constructor in a public [art of employee ]
#include <iostream>
using namespace std;

class complex {
    double a;
    double b;
    public :
    complex(double a, double b){
        this->a=a;
        this->b=b;


    }
    void show_data(void){
        cout<<"a+b"<<a<<"+i"<<b<<endl;
            }
            complex operator+(const complex g){
                complex c(0,0);
                c.a=a+g.a;
                c.b=b+g.b;
                return c;

                            }
            };

int Winmain (){
    complex c1(4.6,4),c2(9.5,5),c4(0,0);
    c1.show_data();
    c2.show_data();
    c4=c1 + c2; // g will copy everthing of c1 and c2  
    c4.show_data();
    return 0;

    }

