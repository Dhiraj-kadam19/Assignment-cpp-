// Q.3. WAP for Decimal to Binary Conversion. Create a class DecimalToBinary and functions
// to
// 1. Convert decimal number to binary.
// 2. Display binary equivalent


#include <iostream>
using namespace std;

class DecimalToBinary {
    int num;
    int binary[32], i;

public:
    // Function to convert decimal to binary
    void convert() {
        cout << "Enter a decimal number: ";
        cin >> num;

        i = 0;
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
    }

    // Function to display binary equivalent
    void display() {
        cout << "Binary equivalent: ";
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }
};

int main() {
    DecimalToBinary obj;
    obj.convert();
    obj.display();

    return 0;
}