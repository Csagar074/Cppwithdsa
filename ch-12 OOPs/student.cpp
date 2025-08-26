

#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int age;
    string course;
};

int main() {
    Student student;

    cout << "Enter Your Roll No: ";
    cin >> student.rollNo;

    cout << "Enter Your Name: ";
    cin >>student.name;

    cout << "Enter Your Age: ";
    cin >> student.age;


    cout << "Enter Your Course: ";
    cin >> student.course;


    cout << endl << "---- Student Info ----" << endl;
    cout << "Roll No  : " << student.rollNo << endl;
    cout << "Name     : " << student.name << endl;
    cout << "Age      : " << student.age << endl;
    cout << "Course   : " << student.course << endl;

    return 0;
}
