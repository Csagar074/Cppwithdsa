#include <iostream>
#include "Reverse.cpp"

int main() {
    Reverse s1;
    int size;

    cout << "Enter Num is Elements: ";
    cin >> size;

    s1.SetData(size);
    s1.getData();
    s1.getRevData();

}