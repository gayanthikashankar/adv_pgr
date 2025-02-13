#include <iostream>
using namespace std;

class Polynomial {
private:
    int a, b, c;  //ax² + bx + c

public:
    void set(int a_val, int b_val, int c_val) {
        a = a_val;
        b = b_val;
        c = c_val;
    }

    //display the polynomial
    void get() {
        cout << a << "x² + " << b << "x + " << c << endl;
    }

    //add two polynomials
    static Polynomial add(Polynomial p1, Polynomial p2) {
        Polynomial result;
        result.a = p1.a + p2.a;  //Add coefficients of x²
        result.b = p1.b + p2.b;  //Add coefficients of x
        result.c = p1.c + p2.c;  //Add constant terms
        return result;
    }
};

int main() {
    Polynomial p1, p2, sum;

    p1.set(2, 3, 4);
    cout << "First polynomial: ";
    p1.get();

    p2.set(3, 2, 1);
    cout << "Second polynomial: ";
    p2.get();

    sum = Polynomial::add(p1, p2);
    cout << "Sum of polynomials: ";
    sum.get();

    return 0;
}