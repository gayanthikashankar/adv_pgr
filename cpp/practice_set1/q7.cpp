/*
Implement a class Matrix with private attributes for a 2x2 matrix. Use a friend function to add two matrices.
*/

#include <iostream>

class Matrix {
private:
    double data[2][2];  

public:
    //constructor
    Matrix(double a11 = 0, double a12 = 0, double a21 = 0, double a22 = 0) {
        data[0][0] = a11;
        data[0][1] = a12;
        data[1][0] = a21;
        data[1][1] = a22;
    }

    
    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    //friend function to add two matrices
    friend Matrix addMatrix(const Matrix& m1, const Matrix& m2);
};

//impl of friend function
Matrix addMatrix(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    
    return result;
}


int main() {
    
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);
    
    std::cout << "Matrix 1:" << std::endl;
    m1.display();
    
    std::cout << "Matrix 2:" << std::endl;
    m2.display();
    
    Matrix m3 = addMatrix(m1, m2);
    
    std::cout << "Result of addition:" << std::endl;
    m3.display();
    
    return 0;
}