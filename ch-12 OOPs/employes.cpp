#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";

        cout << "Emp_ID: ";
        cin >> emp[i].emp_id;

        cout << "Emp_Name: ";
        cin >> emp[i].emp_name;

        cout << "Age: ";
        cin >> emp[i].emp_age;

        cout << "Role: ";
        cin >> emp[i].emp_role;

        cout << "Salary: ";
        cin >> emp[i].emp_salary;

        cout << "City: ";
        cin >> emp[i].emp_city;

        cout << "Experience: ";
        cin >> emp[i].emp_experience;

        cout << "Company Name: ";
        cin >> emp[i].emp_company_name;
    }

    cout <<endl<< "---- Employees Info ----" <<endl;
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << " Details:\n";
        cout << "Emp ID       : " << emp[i].emp_id << endl;
        cout << "Name         : " << emp[i].emp_name << endl;
        cout << "Age          : " << emp[i].emp_age << endl;
        cout << "Role         : " << emp[i].emp_role << endl;
        cout << "Salary       : " << emp[i].emp_salary << endl;
        cout << "City         : " << emp[i].emp_city << endl;
        cout << "Experience   : " << emp[i].emp_experience << endl;
        cout << "Company Name : " << emp[i].emp_company_name << endl;
    }

    return 0;
}
