// Q.2. Find Second Largest Number
// Given N numbers, find the second largest number.
// Input:
// 5
// 10 4 8 20 15
// Output:
// 15

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {10, 4, 8, 20, 15};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << secondLargest;

    return 0;
}

  











