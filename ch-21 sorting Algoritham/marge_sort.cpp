#include <iostream>
#include <vector>
using namespace std;

// Merge function
void merge(vector<int> &a, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    // Merge both halves into temp
    while (i <= mid && j <= end) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp.push_back(a[i]);
        i++;
    }

    // Copy remaining elements from right half
    while (j <= end) {
        temp.push_back(a[j]);
        j++;
    }

    // Copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        a[start + k] = temp[k];
    }
}

// Merge Sort function
void merge_sort(vector<int> &a, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);

        merge(a, start, mid, end);
    }
}

// Main function
int main() {
    int n;
    cout << "Enter Number of Elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter Array Elements:";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout <<endl << "Array before sorting: ";
    for (int e : a)
        cout << e << " ";

    merge_sort(a, 0, n - 1);

    cout <<endl << "Array after sorting: ";
    for (int e : a)
        cout << e << " ";
    cout << endl;

    return 0;
}
