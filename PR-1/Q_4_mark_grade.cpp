#include <iostream>
using namespace std;


int main() {
    int mark;
    char Grade;

    cout << "ENTER YOUR MARK= ";
    cin >> mark;

    (mark > 90) ? Grade = 'A' :
    (mark >= 80) ? Grade = 'B' :
    (mark >= 70) ? Grade = 'C' :
    (mark >= 60) ? Grade = 'D' :
    (mark >= 50) ? Grade = 'E' :
    (mark >= 40) ? Grade = 'F' :
    (cout << "SORRY YOU ARE FAIL\n", Grade = '\0');

    switch (Grade) {
        case 'A':
            cout << "YOUR GRADE=" << Grade << "Excellent Work" << endl;
            break;
        case 'B':
            cout << "YOUR GRADE=" << Grade << "Well done" << endl;
            break;
        case 'C':
            cout << "YOUR GRADE=" << Grade << "Good Job" << endl;
            break;
        case 'D':
            cout << "YOUR GRADE=" << Grade << "Better work" << endl;
            break;
        case 'E':
            cout << "YOUR GRADE=" << Grade << "You are Passed" << endl;
            break;
        case 'F':
            cout << "YOUR GRADE=" << Grade << "Sorry You Are Fail...Try Again" << endl;
            break;
            
            cout << "Invalid choice";
    }

    if (Grade == 'A' || Grade == 'B' || Grade == 'C' || Grade == 'D' || Grade == 'E' || Grade == 'F') {
        cout << "\n" << Grade << " - You are eligible to go ahead";
    } else {
        cout << "\n" << Grade << " - Sorry, you are not eligible to go ahead";
    }

    return 0;
}
