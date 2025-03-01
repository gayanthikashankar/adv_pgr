/*
 Define a class Book with private members title and price. 
 Implement a copy constructor to create a new book with the same details.
*/

#include <iostream>

class Book{
    private:
    std::string title;
    double price;
    
    public:
    //reg constructor
    Book(std::string title, double price){
        this-> title = title;
        this-> price = price;
    }

    //copy constructor
    Book(const Book &other){
        this->title = other.title;
        this->price = other.price;
    }

    //displya book details
    void display(){
        std::cout << "title: " << title << std::endl;
        std::cout << "price: " << price << std::endl;
    }
};

int main(){
    Book b1("C++ Programming", 29.99);
    Book copy = b1;

    std::cout << "og book:" << std::endl;
    b1.display();
    
    std::cout << "\ncopied book:" << std::endl;
    copy.display();
    

}