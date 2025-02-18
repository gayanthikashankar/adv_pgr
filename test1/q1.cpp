/*  
Write a c++ CODE THAT DEMONSTARATES PUBLIC INHERITANCE USING CLASSES POLYNOMIAL AND LINEAR
- Create a base class Polynomial with necessary numbers
- Created a derived class linear that publilicly inherits from polynomial
- inside linear, define a public function multiply() that takes another linear equation and multiplies them to form a quadratic equation
- implement a function to display the resultant quadratic function in the standrard form

Hint: make a = 0

Q: if we create an object intstance will this print

Q: why do we create static function?: 
- belong to class rather than instance of class
- don't req obj to be created to be used
- only one copy exists in memory regardless of how many objects are created
*/


#include <iostream>

class Polynomial {
private:
    int a, b, c;
public:
    //Constructor
    Polynomial(int a_val = 0, int b_val = 0, int c_val = 0) {
        a = a_val;
        b = b_val;
        c = c_val;
    }
    
    void set(int a_val, int b_val, int c_val) {
        a = a_val;
        b = b_val;
        c = c_val;
    }
    
    
    int getA() { return a; }
    int getB() { return b; }
    int getC() { return c; }
    
    
    void display() {
        if(a != 0) std::cout << a << "x² + ";
        if(b != 0) std::cout << b << "x + ";
        std::cout << c;
    }
};

class Linear : public Polynomial {
public:
    
    Linear(int b_val = 0, int c_val = 0) : Polynomial(0, b_val, c_val) {}
    
    
    Polynomial multiply(Linear L2) {
        Polynomial result;
        //(b1x + c1)(b2x + c2)
        int new_a = getB() * L2.getB();         //x^2
        int new_b = getB() * L2.getC() + getC() * L2.getB();  //x
        int new_c = getC() * L2.getC();         //cinst
        
        result.set(new_a, new_b, new_c);
        return result;
    }
    
    
    void displayLinear() {
        std::cout << getB() << "x + " << getC();
    }
};

int main() {
    
    Linear L1(2, 3);    
    Linear L2(4, 5);   
    
    
    std::cout << "First linear equation: ";
    L1.displayLinear();
    std::cout << std::endl;
    
    std::cout << "Second linear equation: ";
    L2.displayLinear();
    std::cout << std::endl;
    
    
    Polynomial result = L1.multiply(L2);
    
    
    std::cout << "Result of multiplication (quadratic): ";
    result.display();
    std::cout << std::endl;
    
    return 0;
}