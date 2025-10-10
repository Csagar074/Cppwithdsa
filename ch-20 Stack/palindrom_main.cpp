#include "Palindrom.cpp"

int main()
{
    string name;

    cout << "Enter any Name: ";
    cin >> name;

    Stack stack(name.length());

    if (stack.isPalindrome(name))
    {
        cout << "This name is Palindrome..." << endl;
    }
    else
    {
        cout << "This name is Not Palindrome..." << endl;
    }

    return 0;
}