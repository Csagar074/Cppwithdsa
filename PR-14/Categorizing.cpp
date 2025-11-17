#include <iostream>
#include <vector>
using namespace std;

class Algorithm {
public:
    // Selection Sort (Descending)
    void selSort(vector<int> &a) {
        int num = a.size();
        for(int i = 0; i < num - 1; i++) {
            int mx = i;
            for(int j = i + 1; j < num; j++)
                if(a[j] > a[mx]) mx = j;
            swap(a[i], a[mx]);
        }
    }

    // Merge Sort
    void merge(vector<int>& a, int s, int m, int e) {
        vector<int> temp;
        int i = s, j = m + 1;

        while(i <= m && j <= e)
            temp.push_back(a[i] <= a[j] ? a[i++] : a[j++]);

        while(i <= m) temp.push_back(a[i++]);
        while(j <= e) temp.push_back(a[j++]);

        for(int k = 0; k < temp.size(); k++)
            a[s + k] = temp[k];
    }

    void mergeSort(vector<int> &a, int s, int e) {
        if(s >= e) return;
        int m = (s + e) / 2;
        mergeSort(a, s, m);
        mergeSort(a, m + 1, e);
        merge(a, s, m, e);
    }

    // Binary Search
    int binSearch(vector<int>& a, int val) {
        int l = 0, r = a.size() - 1;
        while(l <= r) {
            int m = (l + r) / 2;
            if(a[m] == val) return m;
            if(val < a[m]) r = m - 1;
            else l = m + 1;
        }
        return -1;
    }

    void show(vector<int>& a) {
        for(int x : a) cout << x << " ";
        cout << endl;
    }
};
