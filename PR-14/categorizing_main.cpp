
#include <iostream>
#include <vector>
#include "Categorizing.cpp"
using namespace std;

int main() {
    Algorithm object;
    int num, choice, value;

    cout << "Enter size: ";
    cin >> num;

    vector<int> a(num);
    cout << "Enter elements:"<<endl;
    for(int i = 0; i < num; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    do {
        cout <<endl <<"1.Selection Sort ";
        cout <<endl <<"2.Merge Sort ";
        cout <<endl <<"4.Binary Search ";
        cout <<endl <<"4.Display ";
        cout <<endl <<"0.Exit";
        cout <<endl <<" Choice:"; 
        cin >> choice;

        switch(choice) {
            case 1:
                object.selSort(a);
                cout << "Sorted (Descending): ";
                object.show(a);
                break;
            case 2:
                object.mergeSort(a, 0, num - 1);
                cout << "Sorted (Ascending): ";
                object.show(a);
                break;
            case 3:
                object.mergeSort(a, 0, num - 1);
                cout << "Enter value to search: ";
                cin >> value;
                value = object.binSearch(a, value);
                cout << (value == -1 ? "Not Found" : "Found at index: " + to_string(value)) << endl;
                break;
            case 4:
                object.show(a);
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice...." << endl;
        }
    } while(choice != 5);

    return 0;
}
