
#include <iostream>
using namespace std;

class RBI
{
private:
    double rate;

protected:
    RBI()
    {
        rate = 7.8;
    }

public:
    void findBankRate(string bankName, double total_amount)
    {
        double finalAmount = (total_amount * rate) / 100;

        cout << endl
             << bankName << " has to pay : " << finalAmount << endl
             << endl;
    }
};

class SBI : public RBI
{
private:
    string bankName;
    double total_amount;

public:
    void setTotalAmountSBI()
    {
        cout << "Enter Bank Name : ";
        cin >> bankName;
        cout << "Enter SBI Total Amount : ";
        cin >> total_amount;

        findBankRate(bankName, total_amount);
    }
};

class BOB : public RBI
{
private:
    string bankName;
    double total_amount;

public:
    void setTotalAmountBOB()
    {
        cout << "Enter Bank Name : ";
        cin >> bankName;
        cout << "Enter Bank of Baroda Total Amount : ";
        cin >> total_amount;

        findBankRate(bankName, total_amount);
    }
};

class ICICI : public RBI
{
private:
    string bankName;
    double total_amount;

public:
    void setTotalAmountICICI()
    {
        cout << "Enter Bank Name : ";
        cin >> bankName;
        cout << "Enter ICICI Bank Total Amount : ";
        cin >> total_amount;

        findBankRate(bankName, total_amount);
    }
};
