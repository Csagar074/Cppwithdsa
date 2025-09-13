#include <iostream>
using namespace std;


class jay {
public:
    int a, b, c;
};


class pavan : public jay {
public:
    // setter 
    void setSumData() {
        cout << "Enter A Value: ";
        cin >> a;
        cout << "Enter B Value: ";
        cin >> b;
        cout << "Enter C Value: ";
        cin >> c;

        cout <<endl <<endl;
    }

    // getter 
    int sumOfcube;
    void getSumData() {
        cout <<"Cube of is A :" <<a*a*a <<endl;
       
        cout <<"Cube of is B :" <<b*b*b <<endl;
        
        cout <<"Cube of is C :" <<c*c*c <<endl <<endl;

        cout << "Sum of cubes = "<<((a*a*a)+(b*b*b)+(c*c*c)) << sumOfcube << endl;
    }
};