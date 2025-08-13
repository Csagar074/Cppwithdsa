#include <iostream>
using namespace std;

main(){
    int size1,size2;

    cout<<"Enter Size1:";
    cin>> size1;

    cout<<"enter Size2:";
    cin >>size2;

    int a[size1] , b[size2];
    int marge[size1 + size2];

    cout<<endl 
      <<"First Array Input"  <<endl;

      for(int i=0; i< size1; i++){
         cout <<"Enter a["<<i <<"]: "<< endl;
          cin >>a[i];
    }

      cout<<endl 
      <<"Second Array Input"  <<endl;

      for(int i=0; i< size2; i++){
         cout <<"Enter b["<<i <<"]: "<< endl;
          cin >>b[i];
    }

    // marge logic 

    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }
     for (int i = 0; i < size2; i++)
    {
        marge[i+size1] = b[i];
    }
       for (int i = 0; i <size1 + size2; i++)
    {
       cout << marge[i]  <<"\t";
    }
    
    
}