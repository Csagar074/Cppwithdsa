
#include "Cube.cpp"
int main() {
    Square s;
    Cube c;

    // Input from user once for Square
    cout << "\n--- Square Calculation ---\n";
    s.setData();
    s.getSquare();

    // Input from user again for Cube
    cout << "\n--- Cube Calculation ---\n";
    c.setData();
    c.getCube();

    return 0;
}
