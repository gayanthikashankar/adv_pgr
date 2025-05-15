/*
compile time polymporphsim: operator overloading

- members of a class are private by default
- members of a struct are public by default

*/

#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YTchannel{
    string name;
    int subs =0;

    //conctructor
    // constructor is a special member function that is called when an object of the class is created
    YTchannel(string name, int subs){
        this -> name = name;
        this -> subs = subs;
    }

};
//pass by reference: passing the original object instread of a copy
void operator<<(ostream &out, YTchannel &yt){
    out << "YT channel name: " << yt.name << endl;
    out << "YT channel subs: " << yt.subs << endl;
}

int main() {
    YTchannel yt1("cooking channel", 100);
    //cout<<yt1; ---compiler doesnt know how to print yt1
    // we need to overload the << operator (insertion operator)

    cout<<yt1;
    

}