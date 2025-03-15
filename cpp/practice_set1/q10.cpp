/*
Implement a class Time with private members hours and minutes. 
Over- load the constructor to initialize time with different formats (HH:MM and total minutes).
*/

#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    //default contr
    Time() {
        hours = 0;
        minutes = 0;
    }

    //constr for HH:MM format
    Time(int h, int m) {
        //invalid time values
        if (h >= 0 && h < 24 && m >= 0 && m < 60) {
            hours = h;
            minutes = m;
        } else {
            std::cout << "Invalid time values. Setting to 00:00" << std::endl;
            hours = 0;
            minutes = 0;
        }
    }

    //overloaded constructor for total minutes format
    Time(int totalMinutes) {
        if (totalMinutes >= 0) {
            hours = totalMinutes / 60;
            minutes = totalMinutes % 60;
            
            
            hours = hours % 24;
        } else {
            std::cout << "Invalid negative minutes. Setting to 00:00" << std::endl;
            hours = 0;
            minutes = 0;
        }
    }

    //HH:MM format
    void display() const {
        std::cout << (hours < 10 ? "0" : "") << hours << ":" 
                  << (minutes < 10 ? "0" : "") << minutes << std::endl;
    }

    //total minutes
    int getTotalMinutes() const {
        return hours * 60 + minutes;
    }
};

int main() {
    
    Time t1;                
    Time t2(14, 30);        
    Time t3(90);            
    Time t4(1440);          
    
    std::cout << "Default time: ";
    t1.display();
    
    std::cout << "Time from hours and minutes: ";
    t2.display();
    std::cout << "Total minutes: " << t2.getTotalMinutes() << std::endl;
    
    std::cout << "Time from total minutes (90): ";
    t3.display();
    
    std::cout << "Time from total minutes (1440): ";
    t4.display();
    

    //invalid
    
    Time t5(25, 70);        
    std::cout << "Time from invalid HH:MM: ";
    t5.display();
    
    Time t6(-45);          
    std::cout << "Time from invalid negative minutes: ";
    t6.display();
    
    return 0;
}