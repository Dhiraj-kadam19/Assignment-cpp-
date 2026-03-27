// Q.2. Count how many digits are present in the number.
// Input:
// 12345
// Output:
// Number of digits = 5


#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter number: ";
    cin >> num;

    while(num != 0) {
        num /= 10;
        count++;
    }

    cout << "Number of digits = " << count;

    return 0;
}