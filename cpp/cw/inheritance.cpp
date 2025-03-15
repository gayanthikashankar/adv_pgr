#include <iostream>
using namespace std;

class mathematic(

    public:
    int x;
    int y;
    public:
        void get_square(int a, int b){
            this->res = a*a+b*b;
            cout<< "Sum of square is :" << res << endl;
        }
        mathematics(int a, int b){
            this->a=a;
            this->b=b;

        }
);

//inherits all
class physics : public mathematics{
public: 

};

int main(){
    return 0;
}