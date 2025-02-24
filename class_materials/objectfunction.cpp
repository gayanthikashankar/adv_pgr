#include<iostream>
using namespace std;
class Distance_fi{
    private:
    int feet;
    int inch;
    public:
    static int count;
    void set_value(int feet , int inch){
        this->feet = feet;
        this->inch = inch;
        count++;
    }
    void get_values(void){
        cout<<" feet ->"<<feet<<" inch ->"<<inch<<" count"<<count<<endl;
    }
    void Sum_function(Distance_fi c1, Distance_fi c2){
        this->feet = c1.feet + c2.feet;
        this->inch = c1.inch + c2.inch;
    }
    static void count_access(void){
        cout<<"the value of count is "<<count<<endl;
    }

};
int Distance_fi :: count = 0;
int main(){
    Distance_fi d1,d2,sum;
    d1.set_value(4,5);
    d1.get_values();
    d2.set_value(5,5);
    d2.get_values();
    Distance_fi :: count_access();
    sum.Sum_function(d1,d2);
    sum.get_values();
    return 0;
}