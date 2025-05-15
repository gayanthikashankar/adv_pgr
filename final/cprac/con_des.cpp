#include <iostream>
#include <string>
using namespace std;

/*
- constructor: a special member function that is called when an object of the class is created
- destructor: a special member function that is called when an object of the class is destroyed
deallocate memory

- must cretae own detsructor when we use pointers, otw we have memory leaks
*/

class Book{
    private:
    string title;
    string author;
    int *Rates;
    int ratescounter;//numelements in rates

    public:
    Book(string title, string author){
        this->title = title;
        this->author = author;
        cout << "Book created: " << title << endl;

        ratescounter = 2;
        Rates = new int[ratescounter]; //dynamic memory allocation
        Rates[0] = 5;    
        Rates[1] = 4;
    }


    //tilda ~ is used to define a destructor
    //doesnt have return type
    //doesnt receive any parameters
    //only one destructor can be defined in a class

    ~Book(){
        delete[] Rates; //deallocate memory
        Rates = nullptr; //set pointer to null
        cout << "Book destroyed: " << title << endl;

    }

    void getInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1("The Alchemist", "Paulo Coelho");
    Book book2("The Catcher in the Rye", "J.D. Salinger");
    book1.getInfo();
    book2.getInfo();

    //book1 is destroyed when it goes out of scope
    //destructor is called automatically
    //destructor is called when the object goes out of scope or when program ends

    //destructor invoked in revrse order of constructor

    return 0;
}