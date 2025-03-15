//implementation of circular queue using array

//circular queue can reuse the space at the beginning when elemns are dequeued

#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;  

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
        cout << "Circular Queue with size: " << capacity << endl;
    }

    bool isFull() {
        return (size == capacity);
    }

    bool isEmpty() {
        return (size == 0);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        //Circular code
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
        cout << "Enqueued: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;
        
        if (front == rear) {  
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int count = 0;
        int index = front;
        
        while (count < size) {
            cout << arr[index] << " ";
            index = (index + 1) % capacity;
            count++;
        }
        cout << endl;
    }

    ~CircularQueue() {
        delete[] arr;
        cout << "Memory destroyed" << endl;
    }
};

int main() {
    CircularQueue q(5);
    int values[] = {5, 6, 7, 8};
    
    for (int i = 0; i < 4; i++) {
        q.enqueue(values[i]);
    }
    q.display();

    for (int i = 0; i < 2; i++) {
        q.dequeue();
        q.display();
    }

    q.enqueue(9);
    q.enqueue(10);
    q.display();

    return 0;
}