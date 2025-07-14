#include<iostream>
using namespace std;

main()
{
    int unite;

    float chargise= 0.20;
    float unit_bill;
    cout << " Enter Your Electricity Unit :";
    cin >> unite;

    if (unit <= 50)
    {
        bill = unite * 0.50;
        cout << endl << " Electricity Bill = " << bill + (unit_bill)* chargise;
    }
    else if (unite <= 150)
    {
        bill = 25 + (unite - 50) * 0.75;
        cout << endl << " Electricity Bill = " << bill + (unit_bill) * chargise;
    }
    else if (unite <= 250)
    {
        bill = 100 + (unite - 150) * 1.20;
        cout << endl << "Electricity Bill = " << bill + (unit_bill) * chargise;
    }
    else if (unit >= 250)
    {
        bill = 220 + (unit - 250) * chargise;
        cout << endl <<" Electricity Bill = " << bill + (unit_bill) * chargise;
    }

    else{
        cout << endl << " Invalid valied unit..!";
    }
}