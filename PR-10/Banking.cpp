#include <iostream>
using namespace std;

class Banking {
protected:
    string name;
    long long acNum;
    double balance;

public:
    virtual void createAc() {
        cout << "\nYOUR ACCOUNT DETAILS:\n\n";

        cin.ignore(); // clear input buffer
        cout << "Enter Your Name : ";
        getline(cin, name);

        cout << "Enter Your Account Number : ";
        cin >> acNum;

        cout << "Enter Account Balance (>=500): ";
        cin >> balance;
        if (balance < 500)
            balance = 500;
    }

    void deposit() {
        double Amount;
        cout << "Enter Deposit Amount: ";
        cin >> Amount;
        balance += Amount;

        cout << "Amount Deposited Successfully....."<<endl;
    }

    void withdraw() {
        double Amount;
        cout << "Enter Withdraw Amount: ";
        cin >> Amount;
        if (Amount <= balance) {
            balance -= Amount;
            cout << "Withdrawal Successful......";
        } else {
            cout << "Insufficient Balance......";
        }
    }

    void showInfo(string type) {
        cout <<endl<< "--- Account Information ---"<<endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acNum << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance() { return balance; }
};

// ------------------- Derived Classes -------------------

class SavingsAccount : public Banking {
public:
    void calcInterest() {
        cout << "Yearly Interest (5.5%): " << balance * 0.055 << endl;
    }
};

class CheckingBalance : public Banking {
public:
    void calcInterest() {
        cout << "Yearly Interest (3.0%): " << balance * 0.03 << endl;
    }
};

class FixDepositAc : public Banking {
public:
    void calcInterest() {
        cout << "Yearly Interest (8.5%): " << balance * 0.085 << endl;
    }
};


