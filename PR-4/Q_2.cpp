
#include <iostream>
using namespace std;

int main() {
    int r,c;

    cout <<endl;
    cout << "Enter the Row : ";
    cin >> r;

    cout << "Enter the Column : ";
    cin >> c;

  int a[r][c];
    cout << endl <<"Enter Elements" <<endl;
    for (int i = 0; i < r; i++) {
        for (int j= 0; j < c; j++) {
            cout << "Enter Elements of Array[" << i << " , " << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    int maximum= a[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] > maximum)
                maximum= a[i][j];
        }
    }

    cout <<endl << "The Largest Num =" << maximum;
    
}