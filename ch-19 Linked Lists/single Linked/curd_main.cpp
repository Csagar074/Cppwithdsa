#include "CURD_Linked_List.cpp"

int main() {
    LinkedList list;
    int choice, data, pos;

    do {
        cout << "\n---- LINKED LIST---\n";
        cout << "1. Add at Beginning\n";
        cout << "2. Add at End\n";
        cout << "3. Add at Any Position\n";
        cout << "4. Update Node\n";
        cout << "5. Display All\n";
        cout << "6. Exit\n";
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
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 6);

    return 0;
}
