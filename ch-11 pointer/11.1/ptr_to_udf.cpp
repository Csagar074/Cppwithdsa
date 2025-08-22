#include <iostream>
using namespace std;


int sum(int  *a,int  *b){
    return  *a+ *b;

}
main(){
    int a,b;

    cout <<"Enter a Value :";
    cin >>a;

     cout <<"Enter b Value :";
    cin >>b;

    int ans=a+b;
    cout <<"SUM :" <<ans <<endl;
    
}