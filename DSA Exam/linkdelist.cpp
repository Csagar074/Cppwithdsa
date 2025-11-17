#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int Data;
    Node *next;

    Node(int Data) {
        this->Data = Data;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node *head;
    int count;

    LinkedList() {
        this->head = nullptr;
        this->count = 0;
    }

    // Add at Beginning
    void AddBeginning(int Data) {
        Node *newNode = new Node(Data);
        newNode->next = this->head;
        this->head = newNode;
        count++;
    }

    // Add at Ending
    void addEnding(int Data) {
        Node *newNode = new Node(Data);
        if (this->head == nullptr) {
            this->head = newNode;
        } else {
            Node *ptr = this->head;
            while (ptr->next != nullptr) {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        count++;
    }

    // Update Node Value at Given Position
    void Update(int Data, int Position) {
        if (head == nullptr || count == 0) {
            cout << "List is empty..." << endl;
            return;
        }

        if (Position < 1 || Position > count) {
            cout << "Invalid Position..." << endl;
            return;
        }

        Node *ptr = this->head;
        for (int i = 1; i < Position; i++) {
            ptr = ptr->next;
        }
        ptr->Data = Data;
        cout << "Node updated successfully!" << endl;
    }

    // Add at Any Position
    void AddAnyPosition(int Data, int Position) {
        if (Position < 1 || Position > count + 1) {
            cout << "Invalid Position..." << endl;
            return;
        }

        if (Position == 1) {
            AddBeginning(Data);
            return;
        }
        if (Position == count + 1) {
            addEnding(Data);
            return;
        }

        Node *newNode = new Node(Data);
        Node *ptr = this->head;

        for (int i = 1; i < Position - 1; i++) {
            ptr = ptr->next;
        }

        newNode->next = ptr->next;
        ptr->next = newNode;
        count++;
    }

    // Display all nodes
    void FetchAllNode() {
        if (this->head == nullptr || count == 0) {
            cout << "No Elements are there.." << endl;
            return;
        }

        Node *ptr = this->head;
        cout << "Elements are: ";
        while (ptr != nullptr) {
            cout << ptr->Data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

// QuickSort functions ----------
int quickPartition(vector<int> &a, int start, int end) {
    int pivot = a[end];
    int pIndex = start;

    for (int i = start; i < end; i++) {
        if (a[i] <= pivot) {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    swap(a[pIndex], a[end]);
    return pIndex;
}

void quickSort(vector<int> &a, int start, int end) {
    if (start < end) {
        int pivotIndex = quickPartition(a, start, end);
        quickSort(a, start, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, end);
    }
}

// Linear Search
int linearSearch(int arr[], int n) {
    int target;
    cout << "Enter target Element : ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (target == arr[i]) {
            return i;
        }
    }
    return -1;
}
