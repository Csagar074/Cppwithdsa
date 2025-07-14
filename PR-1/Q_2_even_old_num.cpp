#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter Any Number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout  << "This Number EVEN...." << endl;
    } else {
        cout  << "This NUmber Old..." << endl;
    }

    
    if (n % 5 == 0) {
        cout << " Ths Number is divisible by 5." << endl;
    } else {
        cout << "This Number is not divisible by 5." << endl;
    }

}
