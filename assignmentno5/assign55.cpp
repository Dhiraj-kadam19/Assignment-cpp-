// Q.5. Write a program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << " b = " << b;

    return 0;
}
