/*
ENCAPSULATION
- store memebers pirvately and only give access to them through public methods
- data hiding
- cannot modify the data directly
*/

#include <iostream>
#include <string>
#include <list>
using namespace std;


class YTchannel{
    private:
    string name;
    int subs =0;
    list<string> publishedVideos;

    protected:
    string owner;
    // protected members can be accessed by derived classes
    // private members cannot be accessed by derived classes

    public:
    YTchannel(string name, string owner){
        this -> name = name;
        this -> owner = owner;
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

};

class cookingchannel : public YTchannel{
    public:
    cookingchannel(string name, string owner):YTchannel(name, owner){
        cout << "Cooking channel " << name << " created, owned by: " << owner << endl;
    }

    void practice(){
        cout << owner << " is practicing cooking..." << endl;
    }
};

int main() {

    cookingchannel cookingchannel1("Cooking with Love", "Chef John");
    cookingchannel cookingchannel2("Kaly Cooks", "Kaly");

    cookingchannel1.publishVideo("Pasta Recipe");
    cookingchannel1.publishVideo("Make your own Chilli Oil");
    cookingchannel1.subscribe();
    cookingchannel1.subscribe();
    cookingchannel1.subscribe();
    cookingchannel1.unsub();
    cookingchannel1.getInfo();

    cookingchannel2.practice(); //only objects of cookingchannel can use this method

    

}