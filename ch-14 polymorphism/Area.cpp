#include <iostream>
using namespace std;

// Base class Shape
class Shape {
protected:
    double width, height;

public:
    // Constructor
    Shape(double w = 0, double h = 0) {
        width = w;
        height = h;
    }

    // Virtual function (override in child classes)
    virtual void area() = 0;
};

// Derived class Triangle
class Triangle : public Shape {
public:
    // Constructor calling base class constructor
    Triangle(double w = 0, double h = 0) : Shape(w, h) {}

    void area() override {
        double result = (width * height) / 2.0;
        cout << "Area of Triangle = " << result << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double w = 0, double h = 0) : Shape(w, h) {}

    void area() override {
        double result = width * height;
        cout << "Area of Rectangle = " << result << endl;
    }
};

// Main function
int main() {
    double w, h;

    cout << "Enter width and height for Triangle: ";
    cin >> w >> h;
    Triangle t(w, h);

    cout << "Enter width and height for Rectangle: ";
    cin >> w >> h;
    Rectangle r(w, h);

    cout << "\n--- Calculated Areas ---\n";
    t.area();
    r.area();

    return 0;
}
