
#include<iostream>
using namespace std;
main(){
    int i,j,s;
    char ch;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            if(i %2 == 0){
                char ch = j + 64;
                cout << ch << " ";
            }
            else{
                cout << j << " ";
            }
        }
        for(s=5; s>i; s--){
            cout << "    ";
        }
        for(j=i; j>=1; j--){
            if(i %2 == 0){
                char ch = j + 64;
                cout << ch << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for( i=5; i>=1; i--){
        for(j=1; j<=i; j++){
            if(i %2 == 0){
                char ch = j + 64;
                cout << ch << " ";
            }
            else{
                cout << j << " ";
            }
        }
        for(s=i; s<5; s++){
            cout << "    ";
        }
        for(j=i; j>=1; j--){
            if(i %2 == 0){
                char ch = j + 64;
                cout << ch << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
