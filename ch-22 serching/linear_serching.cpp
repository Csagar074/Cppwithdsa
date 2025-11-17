
#include <iostream>
using namespace std;

int searching(int arr[], int n)
{
    int target;

    cout << endl
         << "Enter target Element : ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];

    cout << endl
         << "Enter Elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element a[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array is : ";

    for (int element : arr)
    {
        cout << element << " ";
    }
    int index = searching(arr, n);

    if (index == -1)
    {
        cout << endl
             << " Element not found.." << endl;
    }
    else
    {
        cout << endl
             << "Searching element Index : " << index << endl;
    }
}

