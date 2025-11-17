#include "linkdelist.cpp"


int main() {
    LinkedList list;
    int choice, data, pos;

    do {
        cout << endl<<"---- Linked List CRUD Operation ----"<<endl;
        cout << "Press 1. Add at Beginning"<<endl;
        cout << "Press 2. Add at End"<<endl;
        cout << "Press 3. Add at Any Position"<<endl;
        cout << "Press 4. Update Node"<<endl;
        cout << "Press 5. Display All"<<endl;
        cout << "Press 0. Exit....."<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Data: ";
            cin >> data;
            list.AddBeginning(data);
            break;
        case 2:
            cout << "Enter Data: ";
            cin >> data;
            list.addEnding(data);
            break;
        case 3:
            cout << "Enter Data and Position: ";
            cin >> data >> pos;
            list.AddAnyPosition(data, pos);
            break;
        case 4:
            cout << "Enter Position and New Data: ";
            cin >> pos >> data;
            list.Update(data, pos);
            break;
        case 5:
            list.FetchAllNode();
            break;
        case 6:
            cout << "Linked List Menu Closed."<<endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    // ---- QuickSort ----
    int n;
    cout <<endl << "Enter number of elements for sorting: ";
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element [" << i << "]: ";
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);

    cout <<endl <<"Sorted Array: ";
    for (int e : a) {
        cout << e << " ";
    }
    cout << endl;

    // ---- Linear Searching ----
    int arr[n];
    cout <<endl <<"Enter elements again for searching:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    int index = linearSearch(arr, n);
    if (index == -1)
        cout << "Element Not Found...!";
    else
        cout << "Element Found at Index: " << index << endl;

    return 0;
}
