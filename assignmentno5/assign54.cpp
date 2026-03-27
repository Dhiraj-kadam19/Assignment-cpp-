// Q.4. Write a program to Print Fibonacci series
// Given an integer N, print the first N Fibonacci numbers.
// The Fibonacci sequence is:
// 0 1 1 2 3 5 8 13 ...
// Input:
// 6
// Output:
// 0 1 1 2 3 5

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}