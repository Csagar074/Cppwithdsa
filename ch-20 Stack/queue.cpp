#include <iostream>
using namespace std;


class MyQueue {
public:
    virtual void enqueue(int) = 0;
    virtual void dequeue() = 0;
    virtual void get_front() = 0;
    virtual void get_rear() = 0;
    virtual void Display() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual int size() = 0;

};

class Queue : public MyQueue {
private:
    int *arr;
    int front;
    int rear;
    int count;
    int capacity;

public:
    
    Queue(int capacity) {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    
    ~Queue() {
        delete[] arr;
    }
  
    void enqueue(int element) {
        if (this ->rear == this->capacity-1) {
            cout <<endl << "Queue Overflow...." << endl;
        
        }

        else if (this ->front ==-1 && this ->rear ==-1) {
            this ->front = 0;
            this ->rear = 0;
            this ->arr[this ->rear]=element;
            this ->count++;
        } else {
            this ->rear++;
            this ->arr[this ->rear]=element;
            this ->count++;
        }

        arr[rear] = element;
        count++;
        cout << element << " inserted into Queue." << endl;
    }

    
    void dequeue(){
        if (front == -1 && rear == -1) {
            cout << "Queue Underflow...." << endl;
            return;
        }

        cout << arr[front] << " removed from Queue." << endl;

        if (front == rear) { 
             front = rear = -1;
        } else {
            front++;
        }

        count--;
    }

    void get_front(){
        if (front == -1) {
            cout << "Queue is Empty...." << endl;
        } else {
            cout << "Queue is Not Empty.... " << arr[front] << endl;
        }
    }

    
    void get_rear() {
        if (rear == -1) {
            cout << "Queue is Rear..." << endl;
        } else {
            cout << "Queue is Not Rear: " << arr[rear] << endl;
        }
    }

    void Display(){
        if (front == -1) {
            cout << "Queue is Empty..." << endl;
            return;
        }

        cout << "Queue Elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    void isEmpty() {
        if (front == -1) {
            cout << "Queue is Empty..." << endl;
        } else {
            cout << "Queue is Not Empty..." << endl;
        }
    }

    void isFull(){
        if (rear == capacity - 1) {
            cout << "Queue is Full..." << endl;
        } else {
            cout << "Queue is Not Full..." << endl;
        }
    }

    int size() {
        return count;
    }
};


