/*
const cast for Removing const Qualifier
 Create a class with a const data member and a getter function. 
 Use const cast to modify the const member inside a non-const function.
  Explain why modifying a const object is generally unsafe.

Explanation: 
- using const_cast to remove the const qualifier from constMember and modifying it ---- UNSAFE
- const objects shouldnt be modifided
- if object was defined as const then this is undefined behavior
*/

#include<iostream>

class constClass {
private:
    const int constMember;
public:
    constClass(int val) : constMember(val) {}
    
    int getConstMember() const {
        return constMember;
    }
    
    void unsafeModify() {
        //const_cast to remove const qualifier
        int& nonConstRef = const_cast<int&>(constMember);
        nonConstRef = 100;  //modifying a const member 
        
        std::cout << "modified value: " << constMember << "'n";
    }
};

int main(){
    constClass obj(42);
    std::cout << "og value: " << obj.getConstMember() << "\n";
    
    obj.unsafeModify();
    std::cout << "after modification: " << obj.getConstMember() << "\n";

}