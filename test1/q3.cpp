/*
write a cpp code that demonstartes operator overloading for matrix addition and multiplication using a Matrix class

- create a class matrix that represents a 2 x 2 matrix
- overload the + operator to perform matrix addition
- overload the * operator to perform matrix multiplication
implement a contstructor to initialize matrix elemnts
implement a display function to display the matrix

*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];  

public:
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    //Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) {
        Matrix result;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    //Overloading * operator for matrix mult
    Matrix operator*(const Matrix& other) {
        Matrix result;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                result.mat[i][j] = 0;
                for(int k = 0; k < 2; k++) {
                    result.mat[i][j] += this->mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

   
    void display() const {
        for(int i = 0; i < 2; i++) {
            cout << "[ ";
            for(int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << "]" << endl;
        }
        cout << endl;
    }
};

int main() {
    
    Matrix m1(1, 2, 3, 4);    
                              
    
    Matrix m2(5, 6, 7, 8);    
                              

    cout << "Matrix 1:" << endl;
    m1.display();

    cout << "Matrix 2:" << endl;
    m2.display();

    cout << "Matrix Addition (M1 + M2):" << endl;
    Matrix sum = m1 + m2;
    sum.display();

    cout << "Matrix Multiplication (M1 * M2):" << endl;
    Matrix product = m1 * m2;
    product.display();

    return 0;
}