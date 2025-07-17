#include<iostream>
using namespace std;
main(){
    char s,c;

    cout << "Enter start  charcters:";
    cin >> s;

    cout << "Enter Last charcter: ";
    cin >> c;

    do{
        cout << s++ << "\t";
    }while(s <= c);
}