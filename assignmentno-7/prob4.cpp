// Q.4. WAP to print Hollow Square Pattern. Take integer value n from user. If n = 4, then it
// should print the pattern as follows :
// * * * *
// *     *
// *     *
// * * * *


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
