#include<iostream>
using namespace std;
main(){
    int n,rev = 0,last;
    cout<<"Enter the Number :=  ";
    cin >> n;
    int check = n;
    while(n != 0){
        last = n%10;
        rev = rev * 10 +last;
        n/=10;
    }
    cout << "Reverse := " << rev;
    if (check == rev)
    {
        cout << endl << rev << " is Palindrom Number";
    }
    else{
        cout << endl << rev << " is not Palindrom Number";
    }
}