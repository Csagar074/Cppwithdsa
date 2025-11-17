#include <iostream>
using namespace std;

int main() {
    int n;
    int pass= 1;

    cout << "Enter Any size: ";
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element Of a["<<i <<"]: ";
        cin >> num[i];
    }

    cout << endl << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << "\t";
    }

    // Bubble Sort
    while (pass <= n - 1) {
        for (int i = 0; i < n - pass; i++) {
            if (num[i] > num[i + 1]) {
                int s = num[i];
                num[i] = num[i + 1];
                num[i + 1] = s;
            }
        }
        pass++;
    }

    cout << endl << endl << "Sorted Array: " << endl << endl;
    for (int i = 0; i < n; i++) { 
        cout << num[i] << "\t";
    }

    return 0;
}
