
#include<iostream>
using namespace std;
main(){
    int i,j;

// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 

for(i=5; i>=1; i--){
    for(j=1; j<=i; j++){
        cout << j << " ";
    }
    cout << endl;
}
for(i=2; i<=5; i++){
    for(j=1; j<=i;j++){
        cout << j << " ";
    }
    cout << endl;
}
}
