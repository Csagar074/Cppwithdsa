
#include <iostream>
using namespace std;

class Shape
{
protected:
    float height;
    float width;

public:
    Shape()
    {
        cout << "Enter Height : ";
        cin >> this->height;

        cout << "Enter Width : ";
        cin >> this->width;
    }
};

class Triangle : public Shape
{
protected:
    float area;

public:
    void getTriangleArea()
    {
        area = 0.5 * width * height;
        cout << endl
             << "The Area of Triangle Whose Height : " << height << " & Width : " << width << " is = " << area << endl;
    }
};

class Rectangle : public Shape
{
protected:
    float area;

public:
    void getRectangleData()
    {
        area = height * width;
        cout << endl
             << "The Area of Rectangle Whose Height : " << height << " & Width : " << width << " is : " << area << endl;
    };
};
