
#include <iostream>
using namespace std;

class A
{
protected:
    int id;
    string name, role;

public:
    // setter
    void setA()
    {
        cout << "Enter Employee ID : ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter Employee Name : ";
        cin >> this->name;
        fflush(stdin);
        cout << "Enter Employee Role : ";
        cin >> this->role;
        fflush(stdin);
    }
};

class B : public A
{
protected:
    int salary;
    int experience;

public:
    // setter
    void setB()
    {
        cout << "Enter Employee Salary : ";
        cin >> this->salary;

        cout << "Enter Employee Experience : ";
        cin >> this->experience;
    };
};

class C : public B
{
protected:
    string comp_name;
    string address;

public:
    // setter
    void setC()
    {
        fflush(stdin);
        cout << "Enter Employee Company Name : ";
        cin >> this->comp_name;

        cout << "Enter Employee Address : ";
        cin >> this->address;
        fflush(stdin);
    };

    // getter
    void getc()
    {
        cout << "Employee Name : " << name << endl;
        cout << "Employee Role : " << role << endl;
        cout << "Employee Salary : " << salary << endl;
    };
};

class D : public C
{
protected:
    string email;
    long long int number;

public:
    void setD()
    {
        fflush(stdin);
        cout << "Enter Employee Email : ";
        cin >> this->email;

        fflush(stdin);

        cout << "Enter Employee Contact Number : ";
        cin >> this->number;
    };

    void getAll()
    {
        cout << endl
             << endl;
        cout << "Employee ID : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Role : " << role << endl;
        cout << "Employee Salary : " << salary << endl;
        cout << "Employee Experience : " << experience << endl;
        cout << "Employee Company Name : " << comp_name << endl;
        cout << "Employee Address : " << address << endl;
        cout << "Employee Email : " << email << endl;
        cout << "Employee Contact Number : " << number << endl;
    }
};
