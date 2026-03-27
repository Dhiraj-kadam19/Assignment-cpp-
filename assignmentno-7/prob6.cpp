// Q.6. Create a menu driven program for Shopping Cart System. Create class Item with data
// members itemId, itemName, price. Use vector to store items.
// Menu options:
// 1. Add Item
// 2. Display Items
// 3. Calculate Total Bill
// 4. Exit
// Throw exception if price is invalid or negative value

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Item {
public:
    int itemId;
    string itemName;
    float price;

    void input() {
        cout << "Enter Item ID: ";
        cin >> itemId;

        cout << "Enter Item Name: ";
        cin >> itemName;

        cout << "Enter Price: ";
        cin >> price;

        // Exception for invalid price
        if (price < 0) {
            throw invalid_argument("Price cannot be negative!");
        }
    }

    void display() {
        cout << "ID: " << itemId 
             << " Name: " << itemName 
             << " Price: " << price << endl;
    }
};

int main() {
    vector<Item> cart;
    int choice;

    do {
        cout << "\n--- Shopping Cart Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Calculate Total Bill\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Item obj;
                try {
                    obj.input();
                    cart.push_back(obj);
                    cout << "Item added successfully!\n";
                } catch (exception &e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            }

            case 2:
                cout << "\n--- Items in Cart ---\n";
                for (auto x : cart) {
                    x.display();
                }
                break;

            case 3: {
                float total = 0;
                for (auto x : cart) {
                    total += x.price;
                }
                cout << "Total Bill = " << total << endl;
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}