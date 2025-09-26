#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter Number Of Elements: ";
    cin >> size;
    vector<int> arr(size);

    cout <<endl << "Input Elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter Number of[" << i << "]: ";
        cin >> arr[i];
    }
    
    cout << "Output Elements: ";
    for (int element : arr)
        cout << element << " ";
    cout << endl;

    cout <<endl << "Smallest Elements: ";
    for (int i = 1; i < size -1; i++) {
        if (arr[i] < arr[i -1] && arr[i] < arr[i + 1]){
            cout <<arr[i] <<" ";
        }
    }
    cout << endl;

    cout << "Largest Element: ";
    for (int i = 1; i < size -1; i++) {
        if (arr[i] > arr[i -1] && arr[i] > arr[i + 1])
            cout <<arr[i] <<" ";
 }
    }

    