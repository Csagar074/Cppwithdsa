
#include<iostream>
using namespace std;
main(){
    int size;

    cout << "Enter the Number of Students := ";
    cin >> size;

    // taking marks of student
    float a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the marks of " << i+1 << " Student := ";
        cin >> a[i];
    }

    // sum of marks
    float sum =0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }    
    cout << endl << endl << "Sum of All Marks is := " << sum;

    // average of marks
    
    float avg;
    for (int i = 0; i < size; i++)
    {
        avg = sum/size;
    }
    
    cout << endl << endl << "Average of Marks is := " << avg;
}
