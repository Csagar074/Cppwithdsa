#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *address;
};

int main()
{
    Node *HEAD = new Node();

    HEAD->data = 20;
    HEAD->address = NULL;

    Node *n2 = new Node();

    n2->data = 10;
    n2->address = NULL;
    HEAD->address = n2;

    Node *n3 = new Node();

    n3->data = 30;
    n3->address = NULL;
    n2->address = n3;

    Node *n4 = new Node();

    n4->data = 30;
    n4->address = NULL;
    n3->address = n4;

    cout << endl
         << endl;

    cout << "Head Data\t: " << HEAD->data << " Memory Address\t: " << HEAD->address << endl;
    cout << "Second Node Data\t: " << n2->data << " Memory Address\t: " << n2->address << endl;
    cout << "Third Node Data\t: " << n3->data << " Memory Address\t: " << n3->address << endl;
    cout << "Fourth Node Data\t: " << n4->data << " Memory Address\t: " << n4->address << endl;
}