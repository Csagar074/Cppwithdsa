#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter Rows : ";
    cin >> r;

    cout << "Enter Columns : ";
    cin >> c;

    int  a[r][c];

    cout <<endl << "Elements Input"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter  Elements of Array [" << i << " , " << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl << "Transpose matrix Num:" <<endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

}
