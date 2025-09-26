#include <iostream>
#include <vector>
using namespace std;

class Reverse {
private:
    vector<int> V;

public:
    
    void SetData(int size) {
        int num;
        cout << endl << "Enter Elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Enter Element [" << i << "] : ";
            cin >> num;
            V.push_back(num);
        }
    }


    void getData() {
        cout << endl << "Display Data:" << endl;
        cout << "Elements : ";
        for (int element : V) {
            cout << element << " ";
        }
        cout << endl << endl;
    }

    // reverse Number 

    void getRevData() {
        int num = V.size();
        for (int i = 0; i < num / 2; i++) {
            int ele = V[i];
            V[i] = V[num - i - 1];
            V[num - i - 1] = ele;
        }
        cout << "Reverse Number:" << endl;
        getData();
    }
};


