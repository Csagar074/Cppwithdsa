#include <iostream>
using namespace std;

class DMA {
private:
    int size;
    int *arr;
    string wrongindex = "Index is wrong";

    bool indexcheck(int index) {
        return (index >= 0 && index < this->size);
    }

public:
    
    DMA(int size) {
        this->size = size;
        arr = new int[this->size];

        if (arr == nullptr) {
            cout << "Memory allocation failed...." << endl;
        } else {
            cout << "Memory allocation Successfully...." << endl;
        }
    }

    // Destructor
    ~DMA() {
        delete[] arr;
        arr = nullptr;

        if (arr != nullptr) {
            cout << "Memory deallocation failed..." << endl;
        } else {
            cout << "Memory deallocation successfully..." << endl;
        }
    }

    // Insert value at index
    void insert(int index, int value) {
        if (this->indexcheck(index)) {
            arr[index] = value;
        } else {
            cout << "Index is Wrong" << endl;
        }
    }

    // Get value at index
    void getvalue(int index) {
        if (this->indexcheck(index)) {
            cout << "Element is: " << arr[index] << endl;
        } else {
            cout << endl << this->wrongindex << endl;
        }
    }
};

// Main Function
int main() {
    DMA d1(5);

    d1.insert(0, 45);
    d1.insert(1, 65);
    d1.insert(2, 95);

    d1.getvalue(1); 
}
