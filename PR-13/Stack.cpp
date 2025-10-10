#include <iostream>
using namespace std;


class Escalator
{
public:
    virtual void push(int ele) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual ~Escalator() {} // Virtual destructor for safety
};


class MyStack : public Escalator
{
private:
    int *arr;
    int top;
    int count;
    int size;

public:
    
    MyStack(int n)
    {
        this->size = n;
        this->arr = new int[this->size]; 
        this->count = 0;
        this->top = -1;
    }

    ~MyStack()
    {
        delete[] arr;
    }

    // Push operation
    void push(int ele)
    {
        if (this->top == this->size - 1)
            cout <<endl<< "Escalator is Full....."<<endl;
        else
        {
            this->top++;
            this->arr[this->top] = ele;
            this->count++;
        }
    }

    // Pop operation
    void pop()
    {
        if (this->top == -1)
            cout <<endl<< "Escalator is Empty...."<<endl;
        else
        {
            this->top--;
            this->count--;
        }
    }

    // Display top element
    void topElement()
    {
        if (this->top == -1)
            cout <<endl << "Escalator is Empty..."<<endl;
        else
            cout <<endl<< "Top Element: " << this->arr[this->top] << endl;
    }

    // Check if stack is empty
    void isEmpty()
    {
        if (this->top == -1)
            cout <<endl<< "Escalator is Empty...."<<endl;
        else
            cout <<endl<< "Escalator is Not Empty...."<<endl;
    }

    // Check if stack is full
    void isFull()
    {
        if (this->top == this->size - 1)
            cout <<endl<< "Escalator is Full...."<<endl;
        else
            cout <<endl<<"Escalator is Not Full...."<<endl;
    }
};