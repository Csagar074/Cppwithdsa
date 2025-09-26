#include <iostream>
#include <vector>
using namespace std;

class Curd {
private:
    vector<int> V;

public:
    void AddData(int ele) {
        V.push_back(ele);
    }

    void DisplayData() {
        cout << "Data: ";
        for (int ele : V) {
            cout << ele << " ";
        }
        cout << endl;
    }

    void UpdateData(int x, int y) {
        if (x >= 0 && x < V.size()) {
            V[x] = y;
            cout << "Data updated" << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void DeleteData(int index) {
        if (index >= 0 && index < V.size()) {
            V.erase(V.begin() + index);
            cout << "Data deleted successfully." << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};
