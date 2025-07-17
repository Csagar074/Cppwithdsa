#include<iostream>
using namespace std;
main(){
    int num,count=0;
    cout << "Enter any Number:";
    cin >> num;
    while(num!= 0){

        count++;
        num/=10;
    }
    cout << "the count Digits:" << count;
}