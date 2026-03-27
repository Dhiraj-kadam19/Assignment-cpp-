// Q.4. Simple Calculator Using Class
// Create a class Calculator.
// Data Members
//  num1
//  num2
// Member Functions
//  add()
//  subtract()
//  multiply()
//  divide()
//  square()
// Requirements
//  Take input from user.
//  Perform all operations using class functions.

#include <iostream>
using namespace std;

class Calculator {
    float num1, num2;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Addition = " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction = " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication = " << num1 * num2 << endl;
    }

    void divide() {
        if(num2 != 0)
            cout << "Division = " << num1 / num2 << endl;
        else
            cout << "Division by zero not allowed\n";
    }

    void square() {
        cout << "Square of num1 = " << num1 * num1 << endl;
        cout << "Square of num2 = " << num2 * num2 << endl;
    }
};

int main() {
    Calculator c;

    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    c.square();

    return 0;
}