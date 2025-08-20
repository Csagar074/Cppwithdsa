#include <iostream>
using namespace std;

int multi(){
    int a,b;

    cout <<"Enter First Number :";
    cin >>a;

    cout <<"Enter Second Number :";
    cin >>b;

    return a*b;
}

int main(){
    int ans=multi();

    cout <<"MULTIMICTION IS :"<<ans;

    return 0;
}