#include<iostream>
using namespace std;
class Point{
    int x;
    int y;
    public:
    Point(int a){
        this->x = a;
        this->y =0;
    }
    void get_details(void){
        cout<<"X-> "<<x<<" Y->"<<y<<endl;
    }
};
int main(){
Point d(2),f(45);
    d.get_details();
    f.get_details();
    return 0;
}