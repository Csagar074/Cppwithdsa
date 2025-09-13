
#include "Cube.cpp

// Main function
int main() {
    Calculator calc;
    calc.info();

    int count;
    cout << "\nEnter how many numbers you want (2=Division, 3=Subtraction, 4=Multiplication, 5=Addition): ";
    cin >> count;

    calc.setNumbers(count);   // User input le raha hai
    calc.getResult(count);    // Calculation perform ho raha h
}"