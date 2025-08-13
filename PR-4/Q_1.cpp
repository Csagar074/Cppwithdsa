#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter The Size : ";
    cin >> size;

    int a[size];
    cout << endl <<"Enter Elements" <<endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter The Elements of Array[" << i << "] : ";
        cin >> a[i];
    }

    cout <<endl  <<"Output: "<<endl ;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            cout << a[i] << ", ";
        }
    }
}
