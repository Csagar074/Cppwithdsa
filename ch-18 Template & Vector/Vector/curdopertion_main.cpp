#include <iostream>
#include "curdopertion.cpp"

int main() {
    Curd P1;
    int choice, ele, x, y;

    do {
        cout << endl;
        cout << "1. Add Data" << endl;
        cout << "2. Display Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Delete Data" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Element to Add: ";
            cin >> ele;
            P1.AddData(ele);
            break;

        case 2:
            P1.DisplayData();
            break;

        case 3:
            cout << "Enter Index: ";
            cin >> x;
            cout << "Enter New Value: ";
            cin >> y;
            P1.UpdateData(x, y);
            break;

        case 4:
            cout << "Enter Index: ";
            cin >> x;
            P1.DeleteData(x);
            break;

        case 5:
            cout << "Exiting program..." << endl;
            exit(0);

        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
