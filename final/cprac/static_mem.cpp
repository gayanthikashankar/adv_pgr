#include <iostream>
#include <string>       
using namespace std;

/*
static member variables: belongs to the class, not to any object of the class
- aka class variables
- regular vars = instant vars


whenevr we use 'new' use 'delete' to free the memory
*/

class Animal{
    public:
    string species;
    //static member variable
    static int total;

    //constructor
    Animal(string species){
        this->species = species;
        total++;
    }

    //destructor
    ~Animal(){
        total--;
    }

};

int Animal::total = 0; //initialize static member variable outside the class

int main() {
    //declare a pointer variable that points to an Animal object

    /* variables are tied to the object: */

    Animal* lion = new Animal("lion");
    Animal* tiger = new Animal("tiger");

    cout<<"Lion:"<<lion->species<<endl;        //prints  Lion:lion
    cout<<"Tiger:"<<tiger->species<<endl;      //prints Tiger:tiger
    cout<<"Total animals:"<<Animal::total<<endl; //prints Total animals

    delete lion;
    delete tiger;

    cout<<"Total animals:"<<Animal::total<<endl;

}