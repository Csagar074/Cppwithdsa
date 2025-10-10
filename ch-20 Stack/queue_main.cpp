#include "queue.cpp"

int main() {
    int size;
    cout << "Enter any Choice :";
    cin >> size;

    Queue queue(size);
    int choice, element;

    do {
        cout << endl;
        cout << "Press 1. Enqueue operatio" << endl;
        cout << "Press 2. Dequeue operatio" << endl;
        cout << "Press 3. Front operatio" << endl;
        cout << "Press 4. Rear operatio" << endl;
        cout << "Press 5. Display operatio" << endl;
        cout << "Press 6.isEmpty operatio" << endl;
        cout << "Press 7.isFull operation" << endl;
        cout << "Press 8.Size operatio" << endl;
        cout << "Press 0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Element to Insert: ";
            cin >> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.Display();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
            queue.isFull();
            break;

        case 8:
            cout << "Current Queue Size: " << queue.size() << endl;
            break;

        case 0:
            cout << "Exit program..." << endl;
            break;

        default:
            cout <<endl<< "Invalid Choice..." << endl;
        }
    } while (choice != 0);

    return 0;
}