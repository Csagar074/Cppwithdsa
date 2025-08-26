#include <iostream>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    
    void inputData() {
        cout << "Enter Car ID: ";
        cin >> car_id;

        cout << "Enter Car Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin>> car_color;

        cout << "Enter Car Model: ";
        cin>> car_model;

        cout << "Enter Car Release Year: ";
        cin >> car_release_year;
    }


    void displayData() {
        cout <<endl << "--- Car Details ---" << endl;
        cout << "Car ID: " << car_id << endl;
        cout << "Company: " << car_company_name << endl;
        cout << "Color: " << car_color << endl;
        cout << "Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
    }
};

int main() {
    Car c1, c2, c3, c4;

    cout << "Enter details of Car 1:";
    c1.inputData();

    cout <<endl << "Enter details of Car 2:";
    c2.inputData();

    cout <<endl << "Enter details of Car 3:";
    c3.inputData();
    cout <<endl<< "Enter details of Car 4:";
    c4.inputData();

    cout << " Car INFOREMAToN :" << endl;
    c1.displayData();
    c2.displayData();
    c3.displayData();
    c4.displayData();

    return 0;
}
