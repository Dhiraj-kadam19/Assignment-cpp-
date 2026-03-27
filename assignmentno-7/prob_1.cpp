// Q.1. Accept 10 array elements from user. Sort the array in ascending order. Display sorted
// array.
// Create class SortArray. And use functions for
// 1. taking input from user
// 2. sorting array
// 3. display that sorted array

#include <iostream>
using namespace std;

class SortArray {
    int arr[10];

public:
    // Function to take input from user
    void inputArray() {
        cout << "Enter 10 elements:\n";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    // Function to sort array in ascending order
    void sortArray() {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] > arr[j]) {
                    // swap
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    // Function to display sorted array
    void displayArray() {
        cout << "Sorted Array (Ascending Order):\n";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    SortArray obj;
    obj.inputArray();
    obj.sortArray();
    obj.displayArray();

    return 0;
}
