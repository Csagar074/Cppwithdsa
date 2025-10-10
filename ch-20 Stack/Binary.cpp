#include <iostream>
using namespace std;

class Binary
{
    int top, length, size, *arr;

public:
    Binary(int size)
    {
        this->arr = new int[size];
        this->top = -1;
        this->size = size;
        this->length = 0;
    }

    ~Binary()
    {
        delete[] arr;
    }

    void push(int ele)
    {
        if (this->top == size - 1)
        {
            cout << "Stack is full!" << endl;
        }
        else
        {
            top++;
            arr[top] = ele;
            length++;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!";
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i];
        }
    }
};
