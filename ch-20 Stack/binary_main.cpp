#include "Binary.cpp"
int main()
{
    int n, temp;
    cout << "Enter any number: ";
    cin >> n;

    temp = n;

    Binary stack(50);

    while (n != 0)
    {
        stack.push(n % 2);
        n = n / 2;
    }

    cout << "This number: " << temp << endl;
    cout << "Binary ma convert: ";
    stack.display();

    cout << endl;
    return 0;
}
