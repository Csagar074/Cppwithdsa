#include <iostream>
#include <vector>
using namespace std;

int main(){
    int Row,Col;

    cout <<"Enter Row Digit:";
    cin >>Row;

    cout<<"Enter Col Digit :";
    cin >>Col;

    vector<int>S1(Row);
    vector<vector<int>>matrix(Col,S1);

    cout <<endl <<"Array Input :" <<endl;

    for(int i=0; i <Row; i++){
        for(int j=0; j < Col; j++){
            cout <<"Enter Element["<<i <<"]["<<j<<"] :";
            cin >>matrix[i][j];
        }
         cout <<endl;
}
cout <<endl <<"output Elements" <<endl;
    for(int i=0; i < Row; i++){
        for(int j =0; j < Col; j++){
            cout <<matrix[i][j] <<" ";
        }
        cout <<endl;
    }
}
