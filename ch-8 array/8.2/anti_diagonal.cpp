#include <iostream>
using namespace std;

int main() {
    int row, col;
    
    cout << "Enter Row Size : ";
    cin >> row;

    cout << "Enter Col Size : ";
    cin >> col;

    int a[row][col]; 

    cout <<endl << "Matrix Input :" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout <<endl << "Output Matrix :" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout <<endl << "Anti Diagonal Elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i + j == row - 1) {
                cout << a[i][j] << " ";
            } else {
                cout <<"  ";
            }
          }
              cout <<endl;
        }
    

      }
