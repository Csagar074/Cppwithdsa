#include<iostream>
using namespace std;

main(){
    int row,col;
    
    cout <<"Enter row Size:";
    cin >>row;

    cout <<"Enter col Size:";
    cin >>col;

  int a [row][col];

  cout <<endl <<" Matrix Input: " <<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout <<"Enter a:[" << i << "]";
            cin >>a[i][j];

        }
        cout <<endl;

    }
    cout <<endl <<" Output Matrix: " <<endl;
         for(int i=0; i< row; i++){
        for(int j=0; j< col; j++){
            cin >>a[i][j];

        }
        cout <<endl;

    }

      cout <<endl <<"Diongonal Elements: "; cout <<endl;
         for(int i=0; i< row; i++){
        for(int j=0; j< col; j++){
           if(i==j){
             cout <<a[i][j];
           }
           else{
            cout <<"_";
           }

        }
        cout <<endl;

    }
}
