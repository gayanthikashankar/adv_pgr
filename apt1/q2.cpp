/*
vector class with operator overloading
*/
#include <iostream>

class Vector {
private:
    int size;
    //vector v stores vector components by using an array
    int v[4];
    
public:
    //constructor
    Vector(int size, int values[4]) {
        this->size = size;
        this->v[0] = values[0];
        this->v[1] = values[1];
        this->v[2] = values[2];
        this->v[3] = values[3];
    }
    
    int& operator[](int index) { //avoid copy
        return v[index]; //write
    }
    
    const int& operator[](int index) const {
        return v[index]; //read
    }
    
    void display() const {
        std::cout << "Vector: [";
        for (int i = 0; i < size; i++) {
            std::cout << v[i];
            if (i < size - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
    
    //vector addition: overload + operator
    Vector operator+(const Vector& other ) const { //no copy, can't modify 'other'
        int result[4];
        for (int i = 0; i < size; i++) {
            result[i] = v[i] + other.v[i];
        }
        return Vector(size, result);
    }
    
    //vector subtraction: overload - operator
    Vector operator-(const Vector& other) const {
        int result[4];
        for (int i = 0; i < size; i++) {
            result[i] = v[i] - other.v[i];
        }
        return Vector(size, result);
    }
    
    //vector multiplication: overload * operator
    Vector operator*(const Vector& other) const {
        int result[4];
        for (int i = 0; i < size; i++) {
            result[i] = v[i] * other.v[i];
        }
        return Vector(size, result);
    }
};

int main() {
    int v1_data[4] = {1, 2, 3, 4};
    int v2_data[4] = {5, 6, 7, 8};
    
    Vector v1(4, v1_data);
    Vector v2(4, v2_data);
    
    std::cout << "Vector 1: ";
    v1.display();
    
    std::cout << "Vector 2: ";
    v2.display();
    
    Vector sum = v1 + v2;
    std::cout << "Sum: ";
    sum.display();
    
    Vector diff = v1 - v2;
    std::cout << "Difference: ";
    diff.display();
    
    Vector prod = v1 * v2;
    std::cout << "Product: ";
    prod.display();
    
    return 0;
}