#include <iostream>
using namespace std;
/*

*/

class Distance_f1 {
private:
    int feet;
    int inch;
    //static 
    static int count;  
public:
    void set_value(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
        count++;  
    }

    void get_values(void) {
        cout << "feet -> " << feet << " inch -> " << inch << " count -> " << count << endl;
    }

    static void count_access(void) {
        cout << "The value of the count is " << count << endl;
    }
};

// Static member definition
int Distance_f1::count = 0;

int main() {
    Distance_f1 d1, d2;
    d1.set_value(4, 5);
    d1.get_values();
    
    return 0;
}