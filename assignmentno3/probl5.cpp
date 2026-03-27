// Q.
// Write overloaded functions to find area of:
// -Square
// -Rectangle

// Example

// area(int side)
// area(int length, int breadth)
#include <iostream>
using namespace std;

int add(int a = 10, int b = 20) {
    return a + b;
}

int main() {
    cout << add() << endl;        // 30
    cout << add(50) << endl;      // 70
    cout << add(10, 20) << endl;  // 30

    return 0;
}

