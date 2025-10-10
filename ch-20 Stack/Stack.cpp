#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top;
    int len;

public:
    Stack(int size){
        this-> size =size;
        this-> arr =new int[size];
        this-> top =-1;
        this -> len =0;
        }
    ~Stack(){
        delete[]arr;
    }
    void push(int element){
        if(this ->top ==this ->size -1){
            cout <<"Stack is overflow..."<<endl;
        }
        else{
            this ->top++;
            this ->arr[this ->top]=element;
            this ->len++;
        }
    }
    void pop(){
        if(this ->top ==-1){
            cout <<"Stack is underflow.."<<endl;
        }
        else{
            this ->top--;
            this ->len--;
        }
    }
      void peek(){
        if(top ==-1){
            cout <<"Stack is Empty..."<<endl;
        }
        else{
            this ->arr[this ->top];
            
        }
    }

       void Display(){
        if(top ==-1){
            cout <<"Stack is Empty..."<<endl;
        }
        else{
            for(int i=this->top; i >=0; i--){
                cout <<this ->arr[i];
            }
            
        }
        cout <<endl;
    }
    bool Isempty(){
        if(top ==-1){
            return true;
        }
    }
    
    
};

int main(){
     int size, choice,element;
    Stack Stack(5);
    
    cout <<"Enter Size of Element :"<<endl;
    cin >>size;

    do{
       

        cout <<endl <<"press 1.push operation" <<endl;
        cout <<"press 2.pop operation" <<endl;
        cout <<"press 3.peek operation" <<endl;
        cout <<"press 4.Display operation" <<endl;
        cout <<"press 5.Isimpty operation" <<endl;
        cout <<"press 6.Isfull operation" <<endl;
        cout <<"press 7.Lenght operation" <<endl;
        cout <<"press 8.Exit....." <<endl;

        cout<<"Enter any Choice"<<endl;
        cin >>choice;
                               
        
    }
}