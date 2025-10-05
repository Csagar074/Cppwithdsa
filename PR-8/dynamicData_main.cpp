#include <iostream>
#include "DynamicData.cpp"
using namespace std;

int main() {
    Dynamic s1;
    int choice, value;

    do {
        system("cls");
        cout <<endl << "---Linked List(Curd Opertion)----"<<endl
             << "Press 1. Add at Start"<<endl
             << "Press 2. Add at End"<<endl
             << "Press 3. Search"<<endl
             << "Press 4. Delete"<<endl
             << "Press 5. Reverse"<<endl
             << "Press 6. Display"<<endl
             << "Press 7. Count Nodes"<<endl
             << "Press 8. Exit program..."<<endl
             << "Enter Choice: ";
        cin >> choice;

        system("cls");
        switch (choice) {
        case 1:
            cout <<endl << "Add at Start";
            cout <<endl<< "Enter Value: ";
            cin >> value;
            s1.addStart(value);
            break;
        case 2:
            cout <<endl << "Add at End";
            cout <<endl <<"Enter Value: ";
            cin >> value;
            s1.addEnd(value);
            break;
        case 3:
            cout <<endl << "Search Value";
            cout <<endl <<"Enter Value: ";
            cin >> value;
            s1.search(value);
            break;
        case 4:
            cout <<endl <<"Delete Value ";
            cout <<endl <<"Enter Value: ";
            cin >> value;
            s1.del(value);
            break;
        case 5:
            cout <<endl << "Reverse List"<<endl;
            s1.rev();
            break;
        case 6:
            cout <<endl <<"Display All Nodes"<<endl;
            s1.show();
            break;
        case 7:
            cout <<endl <<"Count Nodes"<<endl;
            s1.countNodes();
            break;
        case 8:
            cout <<endl << "Exit Program..."<<endl;
            s1.exitMsg();
            break;
        default:
            cout <<endl << "Invalid Choice...try again"<<endl;
            s1.invalid();
        }
        s1.pause();
    } while (choice != 0);

    return 0;
}
