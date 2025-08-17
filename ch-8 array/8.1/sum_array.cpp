
#include<iostream>
using namespace std;
main(){
    int sum=0, size1;

    cout << "Enter the size of array 1 := ";
    cin >> size1;

    int a[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }

    for (int i = 0; i < size1; i++)
    {
        sum += a[i];
    }
    cout << "Total of Array := " << sum;
    
} 
