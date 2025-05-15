#include <iostream>
#include <string>
#include <list>
using namespace std;
/*
POLYMORPHISM
- The ability to take many forms (two or more objects that inherit form the same base class with different
implementations of the same function with the same name) 
- compile time: function overloading, operator overloading
- run time: virtual functions, pure virtual functions
- virtual function: a member function in the base class that you expect to override in derived classes
- pure virtual function: a virtual function that has no definition in the base class
- abstract class: a class that has at least one pure virtual function
- abstract classes cannot be instantiated
- abstract classes are used to define interfaces
- derived classes must implement all pure virtual functions of the base class
- derived classes can also override virtual functions of the base class
*/



class YTchannel{
    private:
    string name;
    int subs =0;
    list<string> publishedVideos;

    protected:
    string owner;
    // protected members can be accessed by derived classes
    // private members cannot be accessed by derived classes

    int contentquality;

    public:
    YTchannel(string name, string owner){
        this -> name = name;
        this -> owner = owner;
        contentquality = 0;
        cout << "YT channel " << name << " created, owned by: " << owner << endl;
    }

    void getName(string name){
        this->name = name;
        cout<< "name: " << name << endl;
    }

    void setName(string name){
        this->name = name;
        cout<<"name has been set to" << name << endl;
    }

    void getOwner(string owner){
        this->owner = owner;
        cout<< "owner: " << owner << endl;
    }

    void setOwner(string owner){
        this->owner = owner;
        cout<<"owner has been set to" << owner << endl;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Owner: " << owner << endl;
        cout << "Subscribers: " << subs << endl;
        cout << "Videos: ";
        for(string video : publishedVideos){
            cout << video << ", ";
        }
        cout << endl;
    }

    void subscribe(){
        subs++;
        cout << "You have subscribed to " << name << endl;
    }

    void unsub(){
        if(subs == 0){
            subs--;
            cout << "You have unsubscribed from " << name << endl;
                }
    }

    void publishVideo(string videoName){
        publishedVideos.push_back(videoName);
        cout << "You have published " << videoName << endl;
    }

    void checkanalytics(){
        if (contentquality > 5){
            cout << "Content quality is good" << endl;
        }
        else{
            cout << "Content quality is bad" << endl;
        }
    }
};

class cookingchannel : public YTchannel{
    public:
    cookingchannel(string name, string owner):YTchannel(name, owner){
        cout << "Cooking channel " << name << " created, owned by: " << owner << endl;
    }

    void practice(){
        cout << owner << " is practicing cooking..." << endl;
        contentquality++;
        cout << "Content quality: " << contentquality << endl;
    }
};

class singingchannel : public YTchannel{
    public:
    singingchannel(string name, string owner):YTchannel(name, owner){
        cout << "singing channel " << name << " created, owned by: " << owner << endl;
    }

    //overriding the practice method from the cookingchannel class
    void practice(){
        cout << owner << " is taking singing classes..." << endl;
        contentquality++;
        cout << "Content quality: " << contentquality << endl;
    }
};

int main() {

    cookingchannel cookingchannel1("Cooking with Love", "Chef John");
    singingchannel singingchannel1("AmySings", "Amy");

    cookingchannel1.practice();
    cookingchannel1.practice();
    cookingchannel1.practice();
    cookingchannel1.practice();
    cookingchannel1.practice();
    singingchannel1.practice(); 
    singingchannel1.practice(); 
    singingchannel1.practice(); 
    singingchannel1.practice(); 
    singingchannel1.practice(); 
    singingchannel1.practice(); 
    singingchannel1.practice(); 

    YTchannel *ytchannel1 = &cookingchannel1;     
    YTchannel *ytchannel2 = &singingchannel1;


    ytchannel1->checkanalytics();
    ytchannel2->checkanalytics();
  

    

}