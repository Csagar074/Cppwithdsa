#include <iostream>
#include "Memory.cpp"
using namespace std;

int main() {
    Store<int, string> obj;

    int ch, sid;
    string sname;

    do {
        system("cls");
        cout << endl << "----CRUD Operation------" << endl
             << "1. Add Student Info" << endl
             << "2. Show Student Info" << endl
             << "3. Delete Student Info" << endl
             << "4. Search Student Info" << endl
             << "5. Exit" << endl
             << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            system("cls");
            obj.head(ch);
            sid = obj.getId();
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, sname);
            obj.add(sid, sname);
            obj.pause(ch);
            break;

        case 2:
            system("cls");
            obj.head(ch);
            obj.show();
            obj.pause(ch);
            break;

        case 3:
            system("cls");
            obj.head(ch);
            sid = obj.getId();
            obj.del(sid);
            obj.pause(ch);
            break;

        case 4:
            system("cls");
            obj.head(ch);
            sid = obj.getId();
            obj.find(sid);
            obj.pause(ch);
            break;

        case 5:
            system("cls");
            obj.head(ch);
            cout << "Exiting Program..." << endl;
            break;

        default:
            system("cls");
            cout << "Invalid Choice....." << endl;
            obj.pause(ch);
        }
    } while (ch != 5);

    return 0;
}
