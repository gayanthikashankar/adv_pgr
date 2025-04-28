/*
list class with array based operations
*/
#include <iostream>

//manages dynamic array
class List{
private:
    int l[4]; //Fixed size array of 4 elements
    //num of elements in the list
    int count;
    
public:
    //constructor: init list with fixed size
    List() {
        count = 0;
        for (int i = 0; i < 4; i++) {
            l[i] = 0;
        }
    }
    
    //add to end of list
    bool append(int value) {
        
        if (count >= 4) {
            return false; //if list is fulll
        }
        l[count] = value;
        count++;
        return true;
    }
    
    //ret true if in list
    bool contains(int value) {
        for (int i = 0; i < count; i++) {
            if (l[i] == value) {
                return true;
            }
        }
        return false;
    }
    
    //replace element with new value
    bool replace(int index, int newValue) {
        if (index < 0 || index >= count) {
            return false;
        }
        l[index] = newValue;
        return true;
    }
    
    //deletes a value from a list if it exists
    bool remove(int value) {
        int index = -1;
        for (int i = 0; i < count; i++) { //first searches for the value in the list and stores its index. If not found, index remains -1
            if (l[i] == value) {
                index = i;
                break;
            }
        }
        
        if (index == -1) { //return false if val wasn't found
            return false;
        }
        
        for (int i = index; i < count - 1; i++) { //if value found, shift all elemnts after that value one pos to the left
            l[i] = l[i + 1];
        }
        
        count--; //decrement count as we've removed an element
        return true;
    }
    //display all elems in the list
    void display() {
        std::cout << "List contents: ";
        for (int i = 0; i < count; i++) {
            std::cout << l[i];
            if (i < count - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
    
    int size() {
        return count;
    }
    
    int get(int index) {//retrieve val at a specific index
        if (index < 0 || index >= count) {
            
            return -1;
        }
        return l[index];
    }
};

int main() {
    List myList;
    
    myList.append(10);
    myList.append(20);
    myList.append(30);
    myList.append(40);
    
    std::cout << "After adding elements:" << std::endl;
    myList.display();
    
    int valueToCheck = 20;
    if (myList.contains(valueToCheck)) {
        std::cout << valueToCheck << " is in the list." << std::endl;
    } else {
        std::cout << valueToCheck << " is not in the list." << std::endl;
    }
    
    myList.replace(1, 25);
    std::cout << "After replacing element at index 1:" << std::endl;
    myList.display();
    
    myList.remove(30);
    std::cout << "After removing 30:" << std::endl;
    myList.display();
    
    if (!myList.append(50)) {
        std::cout << "Couldn't add 50: List is full." << std::endl;
    }
    
    return 0;
}