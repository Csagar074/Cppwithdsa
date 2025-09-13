#include <iostream>
#include "Banking.cpp"
using namespace std;

int main() {
    int choice;
    cout << "Select Account Type:" << endl;
    cout << " 1. Savings Account " << endl;
    cout << " 2. Balance Checking" << endl;
    cout << " 3. Fixed Deposit" << endl;
    cout << " Choice: ";
    cin >> choice;

    Banking *acc;

    if (choice == 1)
        acc = new SavingsAccount();
    else if (choice == 2)
        acc = new CheckingBalance();
    else
        acc = new FixDepositAc();

    acc->createAc();

    int obj;
    do {
        cout <<endl<< "----Bank Service ----" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Show Info" << endl;
        cout << "4. Calculate Interest" << endl;
        cout << "0. Exit" << endl;
        cout << "Choice: ";
        cin >> obj;

        switch (obj) {
        case 1:
            acc->deposit();
            break;
        case 2:
            acc->withdraw();
            break;
        case 3:
            acc->showInfo(
                (choice == 1 ? "Savings Account" : choice == 2 ? "Checking Balance"
                                                               : "Fixed Deposit"));
            break;
        case 4:
            if (choice == 1)
                dynamic_cast<SavingsAccount *>(acc)->calcInterest();
            
            else if (choice == 2)
                dynamic_cast<CheckingBalance *>(acc)->calcInterest();
                
            else
                dynamic_cast<FixDepositAc *>(acc)->calcInterest();
        
        case 0:
            cout << "Exiting... Thank you!" << endl;
            break;
        default:
            cout << "Invalid Choice... try again!" << endl;
        }
    } while (obj != 0);

    delete acc;
    return 0;
}
