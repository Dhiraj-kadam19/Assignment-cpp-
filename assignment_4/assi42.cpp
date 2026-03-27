// Q.2. 0–1 Pattern
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1;

        for(int j = 1; j <= i; j++) {
            cout << num;
            num = (num == 1) ? 0 : 1; // toggle
        }

        cout << endl;
    }

    return 0;
}