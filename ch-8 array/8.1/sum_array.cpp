#include<iostream>
using namespace std;

main(){
    
    int size;
    cout<<"Enter Number of Elements:";
    cin >>size;

     int a[size];

   cout<<"Array Input ";cout <<endl;

    for(int i=0; i< size; i++){
         cout <<"Enter a["<<i <<"]: "<< endl;
          cin >>a[i];
    }
      cout<<"Array Output ";cout <<endl;
     for(int i=0; i< size; i++){
        
          cout << a[i] <<"\t";
    }
 int sum=0;

 for(int i=0; i< size; i++){
    sum=sum + a[i];
 
 }
 cout <<"Array Sum:"<< sum  <<endl;
     
}