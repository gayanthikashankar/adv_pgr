//implementation of queue using array

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        cout << "Queue of size: " << capacity << " has been created" << endl;
    }

    void enqueue(int value) {
        if (rear == capacity - 1) {
            cout << "Queue overflow" << endl;
            return;
        }

        if (front == -1) {  //If queue was empty
            front = 0;
        }
        
        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow" << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        
        //Shift all elements to the front
        for (int i = front; i < rear; i++) {
            arr[i] = arr[i + 1];
        }
        rear--;  //Reduce rear by one
        
        if (rear == -1) {  
            front = -1;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
        cout << "Memory destroyed" << endl;
    }
};

int main() {
    Queue q(5);
    
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    
    cout << "\nInitial queue:" << endl;
    q.display();
    
    cout << "\nAfter dequeue:" << endl;
    q.dequeue();
    q.display();
    
    cout << "\nAfter another dequeue:" << endl;
    q.dequeue();
    q.display();
    
    cout << "\nAdding a new element:" << endl;
    q.enqueue(9);
    q.display();

    return 0;
}