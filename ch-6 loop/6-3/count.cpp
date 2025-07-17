#include<iostream>
using namespace std;
main(){
    int n,count=0;
    cout << "Enter the Number :=  ";
    cin >> n;
    while(n != 0){
        n/=10;
        count++;
    }
    cout << endl << "Digits := " << count;
}