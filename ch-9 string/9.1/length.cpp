
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int size = 0;
    cout << "Enter your Name :";
    cin >> name;


    for (int i = 0; i < name[i] != NULL; i++)
    {
        cout << name[i];
        size++;
    }
    
    cout << "your name size :" << size;
    return 0;
}
