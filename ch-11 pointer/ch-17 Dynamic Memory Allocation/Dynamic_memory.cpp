#include <iostream>
using namespace std;

void input(int *n){
    cin >>*n;
}

int  main(){
    int *n =new int();
    float*PI =new float();

    // *n =45;
    cout <<"Enter Any Number ";
    input(n);

    cout <<"Enter PI Value :";
    cin >>*PI;

    cout <<"Address :" <<n <<endl;
    cout <<"Value :"<<*n <<endl

    <<endl;
    cout <<"PI Address : "<<PI <<endl;
    cout <<"PI Value :"<<*PI <<endl;


 }