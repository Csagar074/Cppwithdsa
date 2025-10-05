#include <iostream>
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
            cout << endl << "Invalid Position..." << endl;
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

    // Fetch all Nodes
    void FetchAllNode() {
        if (this->head == nullptr || count == 0) {
            cout << endl << "No Elements are there.." << endl;
            return;
        }

        Node *ptr = this->head;
        cout << endl << "Elements are: ";
        while (ptr != nullptr) {
            cout << ptr->Data << " ";
            ptr = ptr->next;
        }
        cout << endl << endl;
    }
};
