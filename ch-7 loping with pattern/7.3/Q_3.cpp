#include<iostream>
using namespace std;
main(){
int i,j,s;
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1  
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

for(i=5; i>=1; i--){
    for(j=1; j<=i; j++){
        cout << j << " ";
    }
    for(s=5; s>i; s--){
        cout << "    ";
    }
    for(j=i; j>=1; j--){
        cout << j << " ";
    }
    cout << endl;
}

for(i=2; i<=5; i++){
    for(j=1; j<=i; j++){
        cout << j <<" ";
    }
    for(s=5; s>i; s--){
        cout << "    ";
    }
    for(j=i; j>=1; j--){
        cout << j << " ";
    }
    cout << endl;
}

}