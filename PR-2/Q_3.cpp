
#include<iostream>
using namespace std;

main() {
    int num, reverse, s= 0;
    cout << "Enter Your any Num:";
    cin >> num;

    while (num > 9 || s > 9) {
        if(num==0){
            num =s;
            s=0;
        }
        s+= num%10;
        num=num/10;
    }

    cout << (num == 0 ? s: num);
}