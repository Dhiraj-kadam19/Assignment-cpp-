// Q.2. WAP to find Factorial of a Number. Create class FindFactorial and functions to
// 1. Accept a number from user.
// 2. Calculate factorial using loop.
// 3. Display result.




#include <iostream>
using namespace std;

class FindFactorial {
    int num;
    long long fact;

public:
    // Function to accept number from user
    void inputNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Function to calculate factorial using loop
    void calculateFactorial() {
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
    }

    // Function to display result
    void displayResult() {
        cout << "Factorial of " << num << " is: " << fact;
    }
};

int main() {
    FindFactorial obj;
    obj.inputNumber();
    obj.calculateFactorial();
    obj.displayResult();

    return 0;
}


