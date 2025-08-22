#include <iostream>
using namespace std;

int cube(int *x)
{
    return (*x) * (*x) * (*x);
}
int main()
{
    int r, c;
    cout << "Enter size Rows : ";
    cin >> r;
    cout << "Enter size Columns : ";
    cin >> c;

    int my_array[r][c];
    
    for (int j = 0; j < r; j++)
    {
        for (int s = 0; s < c; s++)
        {
            cout << "a[" << j << "][" << s << "] : ";
            cin >> *(*(my_array + j) + s);
        }
    }
    cout << "Cube all Number :" << endl;
    for (int j = 0; j < r; j++)
    {
        for (int s = 0; s < c; s++)
        {
            cout << cube(&my_array[j][s]) << "  ";
        }
        cout << endl;
    }
}
