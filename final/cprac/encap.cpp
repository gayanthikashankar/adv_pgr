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
    string owner;
    int subs =0;
    list<string> publishedVideos;

    public:
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
        while(subs == 0){
            subs--;
            cout << "You have unsubscribed from " << name << endl;
                }
    }

    void publishVideo(string videoName){
        publishedVideos.push_back(videoName);
        cout << "You have published " << videoName << endl;
    }

};
int main() {

    YTchannel yt1;
    yt1.getName("Gayanthika");
    yt1.setName("Gayanthika2");
    yt1.getOwner("Gayanthika");
    yt1.setOwner("Gayanthika2");
    yt1.subscribe();
    yt1.unsub();
    yt1.publishVideo("C++ tutorial");
    yt1.getInfo();

    return 0;

}