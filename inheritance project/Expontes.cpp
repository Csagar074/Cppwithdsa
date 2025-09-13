
#include <iostream>
using namespace std;

class Exponents
{
protected:
    int num;

public:
    Exponents()
    {
        cout << endl
             << "Enter Number : ";
        cin >> num;
    };
};

class Square : public Exponents
{
private:
    int calc;

public:
    void calcSquareValues()
    {
        calc = num * num;
        cout << "The Square of " << num << " : " << calc << endl;
    }
};

class Cube : public Exponents
{
private:
    int calc;

public:
    void calcCubeValues()
    {
        calc = num * num * num;
        cout << "The Cube of " << num << " : " << calc << endl;
    };
};
