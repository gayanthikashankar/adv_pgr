#include <iostream>
using namespace std;

class Distance_f1 {
private:
    int feet;
    int inch;
    static int count;

public:
    void set_value(int feet, int inch) {
        this->feet = feet;
        this->inch = inch;
        count++;
    }

    void get_values(void) {
        cout << "feet -> " << feet << " inch -> " << inch << endl;
    }

    // Function to sum two Distance_f1 objects
    static Distance_f1 sum(Distance_f1 d1, Distance_f1 d2) {
        Distance_f1 result;
        result.feet = d1.feet + d2.feet;
        result.inch = d1.inch + d2.inch;
        
        // Convert if inches >= 12
        if(result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch = result.inch % 12;
        }
        
        return result;
    }
};

int Distance_f1::count = 0;

int main() {
    Distance_f1 d1, d2, result;
    
    // Set values for d1 and d2
    d1.set_value(5, 0);  // 5 feet 0 inches
    d2.set_value(0, 3);  // 0 feet 3 inches
    
    cout << "First distance: ";
    d1.get_values();
    cout << "Second distance: ";
    d2.get_values();
    
    // Add using sum function
    result = Distance_f1::sum(d1, d2);
    
    cout << "Sum of distances: ";
    result.get_values();
    
    return 0;
}