#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a [5]={10,20,30,40,50};

    int *ptr =&a[2];

    // cout <<*ptr; 
    // or 

    printf("%u",*ptr);

    return 0;
}
