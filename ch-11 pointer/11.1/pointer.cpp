#include <iostream>
using namespace std;

int main() {

    int n = 25;
    int *ptr;

    ptr = &n;

    cout << "NUMBER : " << n << endl;
    cout << "PTR : " << *ptr << endl;

    n = 78;
    cout << "NUMBER : " << n << endl;
    cout << "PTR : " << *ptr << endl;

    *ptr = 100;
    cout << "NUMBER : " << n << endl;
    cout << "PTR : " << *ptr << endl;

    return 0;
}

