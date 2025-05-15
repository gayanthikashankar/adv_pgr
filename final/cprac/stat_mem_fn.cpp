#include <iostream>
#include <string>       
using namespace std;

/*
static member fns allow us to access and manipulate sttaic member variables
*/

class Square {
    private:
    int length;
    static int totalSquares;

    static void incrementTotalSquares() {
        //totalSquares++;
        incrementTotalSquares();
    }

    public:
    //constructor
    Square(int length) {
        this->length = length;
        totalSquares++;
    }

    int area() {
        return length * length;
    }

    static int getTotalSquares() {
        return totalSquares;
    }
};

int Square::totalSquares = 0;

int main() {
    Square s1(5);
    cout << "Area of s1: " << s1.area() << endl;
    cout << "Total squares created: " << Square::getTotalSquares() << endl;

}