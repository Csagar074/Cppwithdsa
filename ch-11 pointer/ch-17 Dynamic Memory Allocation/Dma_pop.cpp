#include <iostream>
using namespace std;

int main(){
    int size;
    int *arr;
    cout <<"Enter array Size :";
    cin >>size;

    arr =new int[size];

    if(arr ==NULL){
        cout <<"Memory allocation failed....." <<endl;
        return 1;
    }
    else{
          cout <<"Memory allocation Successfully......." <<endl;
    
    }

    for(int i=0; i< size; i++){
        cout <<"Enter element "<<i +1 <<" : ";
        cin >>arr[i];
    }

    cout <<endl 
           <<endl;

           for(int i=0; i <size; i++){
            cout <<arr[i] <<"\t";

           }

    delete[]arr;
    arr =nullptr;

    if(arr !=nullptr){
         cout <<"Memory allocation failed....." <<endl;
    }
}