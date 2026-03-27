// Q.
// Write a function to calculate the sum of two numbers using default arguments.

// Example

// add(int a=10, int b=20)

// Call function with :

// add()
// add(50)
// add(10,20)

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Reversed array: ";

    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

