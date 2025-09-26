#include <iostream>
#include <vector>
using namespace std;

template <typename SID, typename SNAME>
class Store {
private:
    vector<SID> ids;
    vector<SNAME> names;
    bool k;

public:
    // add student
    void add(int sid, string sname) {
        k = false;
        for (int i = 0; i < ids.size(); i++) {
            if (sid == ids[i]) {
                cout <<endl << "ID Exit....";
                k = true;
                break;
            }
        }
        if (!k) {
            ids.push_back(sid);
            names.push_back(sname);
            cout <<endl << "Add Successfull.....";
        }
    }

    // show all students
    void show() {
        if (ids.empty()) {
            cout <<endl<< "No Records Found.....";
        } else {
            for (int i = 0; i < ids.size(); i++) {
                cout << "ID  : " << ids[i] << "\n";
                cout << "Name: " << names[i] << "\n";
                cout << "------------------"<<endl;
            }
        }
    }

    // delete student
    void del(int sid) {
        k = false;
        for (int i = 0; i < ids.size(); i++) {
            if (sid == ids[i]) {
                ids.erase(ids.begin() + i);
                names.erase(names.begin() + i);
                k = true;
                cout <<endl<< "Delete Successfull....";
                break;
            }
        }
        if (!k) cout << "Not Found....";
    }

    // search student
    void find(int sid) {
        k = false;
        for (int i = 0; i < ids.size(); i++) {
            if (sid == ids[i]) {
                cout << "ID   : " << ids[i] <<endl;
                cout << "Name : " << names[i] <<endl;
                k = true;
                break;
            }
        }
        if (!k) cout << "Found...."<<endl;
    }

    // heading
    void head(int ch) {
        if (ch == 1) cout <<endl << "Add"<<endl;
        else if (ch == 2) cout <<endl << "Show" <<endl;
        else if (ch == 3) cout << endl <<"Delete" <<endl;
        else if (ch == 4) cout <<endl << "Serch" <<endl;
        else if (ch == 0) cout <<endl <<"Exit"<<endl;
    }

    // id input
    int getId() {
        int x;
        cout << "Enter ID: ";
        cin >> x;
        return x;
    }

    // exit msg
    void quit() {
        cout << "Program End...";
    }

    // pause screen
    void pause(int ch) {
        cout <<endl << "Press Enter...";
        if (ch == 1) cin.get();
        else {
            cin.ignore();
            cin.get();
        }
    }
};