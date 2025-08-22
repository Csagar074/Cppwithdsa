#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[20];
    char *pointer;
    int len=0;
    
    cout << "Enter Your any  Name :";
    gets(a);
    pointer = a;

   for (int j = 0; *pointer!='\0'; j++){
      len++;  pointer++;  
   }
    cout << "Total Length : "<<len;
}