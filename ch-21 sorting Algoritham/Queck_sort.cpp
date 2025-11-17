#include <iostream>
#include <vector>
using namespace std;

// Partition function
int quickPartition(vector<int> &a, int start, int end) {
    int pivot = a[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[j], a[i]);
        }
    }
    i++;
    swap(a[end], a[i]);
    return i;
}

// QuickSort function
void quickSort(vector<int> &a, int start, int end) {
    if (start < end) {
        int pivotIndex = quickPartition(a, start, end);

        quickSort(a, start, pivotIndex - 1);
        quickSort(a, pivotIndex + 1, end);
    }
}

int main() {
    int n;
    vector<int> a;

    cout << "Enter Number of Elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter a[" << i << "]: ";
        cin >> element;
        a.push_back(element);
    }

    cout <<endl << "Array before sorted: ";
    for (int e : a) {
        cout << e << " ";
    }

    quickSort(a, 0, n - 1);

    cout <<endl << "Array final sorted: ";
    for (int e : a) {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
