
#include<iostream>
using namespace std;
main(){
    int row,col;

    cout << "Enter the no. of Rows := ";
    cin >> row;
    cout << "Enter the no. of Columns := ";
    cin >> col;

    // taking array value
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the Value of a[" << i << "][" << j << "] := ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    // process of ascending order
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                for (int l = 0; l < col; l++)
                {
                    if (a[i][j] < a[k][l])
                    {
                        int c = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = c;
                    }
                    
                }
                
            }
            
        }
    }
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
        
    }
    
}
