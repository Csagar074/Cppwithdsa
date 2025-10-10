#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
    char *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->arr = new char[size];
        this->top = -1;
        this->size = size;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(char ele)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else
        {
            arr[++top] = ele;
        }
    }

    char pop()
    {
        if (top == -1)
        {
            cout << "Stack is underflow.." << endl;
            return 0; 
        }
        else
        {
            return arr[top--];
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isPalindrome(string str)
    {
        int num = str.length();

        
        for (int i = 0; i < num; i++)
        {
            push(str[i]);
        }

        
        for (int i = 0; i < num; i++)
        {
            if (pop() != str[i]) 
            {
                return false;
            }
        }
        return true;
    }
};


