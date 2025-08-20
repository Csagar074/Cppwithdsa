#include <iostream>
using namespace std;

void Enterdigit(char ch) {
    int x, y;
    cout <<endl<< "Enter first Num: ";
    cin >> x;
    cout << "Enter second Num : ";
    cin >> y;

    switch (ch) {
        case '+':
            cout << "Ans  : " << (x + y) << endl;
            break;
        case '-':
            cout << "Ans : " << (x- y) << endl;
            break;
        case '*':
            cout << "Ans :" << (x* y )<< endl;
            break;
        case '/':
            if (y != 0)
                cout << "Ans : " << (x / y) << endl;
            else
                cout << "/ by 0 allow!" << endl;
            break;
        case '%':
            if (y != 0)
                cout << "Ans :" << (x % y) << endl;
            else
                cout << "% by 0  NOt allow!" << endl;
            break;
    }
}

int main() {
    cout <<endl << "Calculator :" <<endl;
    char exitFlag = '1';

    while (exitFlag != '0') {
        char ch;
        cout << endl <<"Press + "<<endl ;
        cout << "Press -" <<endl;
        cout << "Press * " <<endl;
        cout << "Press / "<<endl;
        cout << "Press % " <<endl;
        cout << "Press 0 to Exit.." <<endl;
        cout << endl <<"Enter Your Choice : ";
        cin >> ch;

        exitFlag = (ch == '0') ? '0' : '1';

        switch (ch) {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                Enterdigit(ch);
                break;
            default:
                if (ch != '0') {
                    cout << "Invalid choice! Please Enter a Valid Operator." << endl;
                }
        }
    }

    cout <<endl << "Exiting... Do Not Press Any Key .."<<endl <<endl;
    return 0;
}
