
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of element : ";
    cin >> n;

    int arr[n];
    cout << endl
         << "Enter Element : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Array is : ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    int target;

    cout << endl
         << "Enter search element : ";
    cin >> target;

    int index = binary_search(arr, n, target);

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
