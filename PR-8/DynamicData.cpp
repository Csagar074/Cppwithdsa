#include <iostream>
using namespace std;

class Dynamic {
public:
    int val;
    Dynamic *next;
    Dynamic *head;
    int cnt = 0;

    Dynamic() { head = nullptr; }
    Dynamic(int v) { val = v; next = nullptr; }

    // add at start
    void addStart(int v) {
        Dynamic *n = new Dynamic(v);
        n->next = head;
        head = n;
        cnt++;
    }

    // add at end
    void addEnd(int v) {
        Dynamic *n = new Dynamic(v);
        if (!head) { head = n; cnt++; return; }

        Dynamic *p = head;
        while (p->next) p = p->next;
        p->next = n;
        cnt++;
    }

    // search
    void search(int v) {
        if (!head) return void(cout <<endl << "Empty List"<<endl);
        Dynamic *p = head;
        while (p) {
            if (p->val == v) return void(cout <<endl << "Found: " << v <<endl);
            p = p->next;
        }
        cout <<endl << "Not Found: " << v << endl;
    }

    // delete by value
    void del(int v) {
        if (!head) return void(cout <<endl<< "Empty List"<<endl);

        if (head->val == v) {
            Dynamic *tmp = head;
            head = head->next;
            delete tmp;
            cnt--;
            cout <<endl<<"Deleted: " << v <<endl;
            return;
        }

        Dynamic *p = head, *q = nullptr;
        while (p && p->val != v) { q = p; p = p->next; }

        if (!p) return void(cout <<endl<< "Not Found: " << v <<endl);

        q->next = p->next;
        delete p;
        cnt--;
        cout <<endl<< "Deleted: " << v << endl;
    }

    // reverse list
    void rev() {
        if (!head) return void(cout <<endl <<"Empty List"<<endl);
        Dynamic *prev = nullptr, *cur = head, *next = nullptr;
        while (cur) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        cout <<endl << "List Reversed"<<endl;
    }

    // count nodes
    void countNodes() {
        cout << endl <<"Total Nodes: " << cnt << endl;
    }

    // display all
    void show() {
        if (!head) return void(cout <<endl<< "Empty List"<<endl);
        Dynamic *p = head;
        cout <<endl << "List: ";
        while (p) { cout << p->val << " "; p = p->next; }
        cout << endl;
    }

    // exit
    void exitMsg() { cout <<endl << "Program Exited..."<<endl; }

    // invalid choice
    void invalid() { cout <<endl << "Invalid Choice"<<endl; }

    // pause
    void pause() {
        cout <<endl << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }
};
