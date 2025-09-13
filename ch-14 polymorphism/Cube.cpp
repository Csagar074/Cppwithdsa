#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int n;
public:
    void setData() {
        cout << "Enter a number: ";
        cin >> n;
    }
    int getNumber() {
        return n;
    }
};

// Derived class for Square
class Square : public Number {
public:
    void getSquare() {
        cout << "Square of " << n << " = " << (n * n) << endl;
    }
};

// Derived class for Cube
class Cube : public Number {
public:
    void getCube() {
        cout << "Cube of " << n << " = " << (n * n * n) << endl;
    }
};


