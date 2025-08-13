#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter The Rows : ";
    cin >> r;

    cout << "Enter The Columns : ";
    cin >> c;

    int a[r][c]; 

    cout << endl <<"Elements of Input:"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter The Elements of Array [" << i << " , " << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout <<endl << "Sum Row of Array" <<endl;
    int r_num;
    int sumR = 0;
    cout << "Enter Row Num" << r - 1 << ": ";
    cin >> r_num;
    for (int j = 0; j < c; j++) {
        sumR += a[r_num][j];
    }
    cout << "The Sum of Row :" << sumR << endl;

    cout <<endl << "Sum Column of Array" <<endl;
    int c_num;
    int sumC = 0;
    cout << "Enter Column Num" << c - 1 << ": ";
    cin >> c_num;
    for (int i = 0; i < r; i++) {
        sumC+= a[i][c_num];
    }
    cout << "The Sum of Column :" << sumC << endl;

}
