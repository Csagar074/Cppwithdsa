#include <iostream>
using namespace std;

main(){
    int n=45;

    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;


    ptr1 = &n;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;

     cout << "N:"<<n <<endl;
     cout <<"PTR 1/t :" <<*ptr1 <<endl;
     cout <<"PTR 2/t :" <<**ptr2 <<endl;
    cout <<"PTR 3/t :" <<**ptr3 <<endl;
    cout <<"PTR 4/t :" <<**ptr4 <<endl;

    

   
}