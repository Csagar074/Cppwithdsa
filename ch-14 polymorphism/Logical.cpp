#include <iostream>
using namespace std;

// Base class
class methemetic {
public:
    virtual void info() {
        cout << "This class performs arithmetic operations using method overloading.\n";
    }
};

// Derived class
class Calculator : public methemetic {
private:
    int a, b, c, d, e;   // numbers
public:
    // Setter (take input from user dynamically)
    void setNumbers(int count) {
        if (count == 2) {
        
            cout << endl <<"Enter 2 Num Divition :"
            <<endl<<"Enter A Value: "<<endl
             <<"Enter B Value :";
            cin >>a >>b;
                  
        }
        else if (count == 3) {
            cout << "Enter 3 Num Subtraction : "  <<endl <<"Enter A value :" <<endl <<"Enter B Value" <<endl <<"Enter C Value :";
            cin >> a >> b >> c;
        }
        else if (count == 4) {
            cout << "Enter 4 num Multiplication: " <<endl <<"Enter A Value :" <<endl <<"Enter B Value" <<endl <<"Enter C Value :" <<endl <<"Enter D Value :" <<endl;
            cin >> a >> b >> c >> d;
        }
        else if (count == 5) {
            cout << "Enter 5 num Addition: " <<endl <<"Enter A Value :" <<endl <<"Enter B Value" <<endl <<"Enter C Value :" <<endl <<"Enter e Value :" <<endl ;
            
            cin >> a >> b >> c >> d >> e;
        }
        else {
            cout << "Invalid number of inputs!" << endl;
        }
    }

    // Getters (call overloaded methods automatically)
    void getResult(int count) {
        if (count == 2) {
            calculate(a, b);
        }
        else if (count == 3) {
            calculate(a, b, c);
        }
        else if (count == 4) {
            calculate(a, b, c, d);
        }
        else if (count == 5) {
            calculate(a, b, c, d, e);
        }
    }

    // Division (2 arguments)
    void calculate(int a, int b) {
        if (b != 0)
            cout << "Division: " << a << " / " << b << " = " << (a / b) << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    // Subtraction (3 arguments)
    void calculate(int a, int b, int c) {
        cout << "Subtraction: " << a << " - " << b << " - " << c
             << " = " << (a - b - c) << endl;
    }

    // Multiplication (4 arguments)
    void calculate(int a, int b, int c, int d) {
        cout << "Multiplication: " << a << " * " << b << " * " << c << " * " << d
             << " = " << (a * b * c * d) << endl;
    }

    // Addition (5 arguments)
    void calculate(int a, int b, int c, int d, int e) {
        cout << "Addition: " << a << " + " << b << " + " << c << " + " << d << " + " << e
             << " = " << (a + b + c + d + e) << endl;
    }
};


