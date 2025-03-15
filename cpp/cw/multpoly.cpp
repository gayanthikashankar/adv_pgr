#include <iostream>
#include <string>

//(ax + b) * (cx + d)
std::string multiply_poly(int a1, int b1, int a2, int b2) {
    int x2_coeff = a1 * a2;           
    int x_coeff = a1*b2 + a2*b1;      
    int constant = b1 * b2;           
    
    std::string result = "";
    
    //Result of the multiplication 
    if (x2_coeff != 0) {
        result += std::to_string(x2_coeff) + "x^2";
    }
    
    if (x_coeff != 0) {
        if (x_coeff > 0 && !result.empty()) {
            result += "+";
        }
        result += std::to_string(x_coeff) + "x";
    }
    
    if (constant != 0) {
        if (constant > 0 && !result.empty()) {
            result += "+";
        }
        result += std::to_string(constant);
    }
    
    if (result.empty()) {
        result = "0";
    }
    
    return result;
}

int main() {
    //(2x + 3) x (4x - 1)
    int a1 = 2;  //2x
    int b1 = 3;  //3
    int a2 = 4;  //4
    int b2 = -1; //-1
    
    //Input polynomials
    std::cout << "First polynomial: " << a1 << "x + " << b1 << std::endl;
    std::cout << "Second polynomial: " << a2 << "x + " << b2 << std::endl;
    
    //Reuslt of multiplication 
    std::string result = multiply_poly(a1, b1, a2, b2);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}


