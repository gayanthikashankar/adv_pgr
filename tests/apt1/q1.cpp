/
/*
Book and ebook class with friend function
*/
#include <iostream>
#include <string>

class Book {
//base class
private:
    int bookID;
    double price;
public:
    Book(int bookID, double price) {
        this->bookID = bookID;
        this->price = price;
    }
    
    //modify book price (set function)
    void updatePrice(double newPrice) {
        this->price = newPrice;
    }
    
    //display book details
    void displayDetails() {
        std::cout << "Book ID: " << bookID << "\n";
        std::cout << "Book price: " << price << "\n";
    }
    
    //static variable: same copy used throughout the program, can be declared anywhere inside the class.
    static double discountRate;
    
    //apply discount to the book price using friend function
    friend applyDiscount(double discountRate) {
        price = price - (price * discountRate);
    }
    


double Book::discountRate = 0.20;

//derived class
class EBook : public Book {
private:
    double fileSize;
    std::string format;
public:
    
    EBook(int bookID, double price, double fileSize, std::string format)
        : Book(bookID, price) {
        this->fileSize = fileSize;
        this->format = format;
    }
    
    void displayEBookDetails() {
        displayDetails(); 
        std::cout << "EBook Filesize: " << fileSize << "\n";
        std::cout << "EBook format: " << format << "\n";
    }
};

int main() {
    
    Book myBook(1001, 29.99);
    std::cout << "Book details before discount:\n";
    myBook.displayDetails();
    
    
    myBook.applyDiscount(Book::discountRate);
    std::cout << "\nBook details after discount:\n";
    myBook.displayDetails();
    
    
    EBook myEBook(2001, 19.99, 3.5, "PDF");
    std::cout << "\nEBook details before discount:\n";
    myEBook.displayEBookDetails();
    
    
    myEBook.applyDiscount(Book::discountRate);
    std::cout << "\nEBook details after discount:\n";
    myEBook.displayEBookDetails();
    
    return 0;
}