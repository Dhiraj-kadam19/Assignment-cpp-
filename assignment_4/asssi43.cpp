// Q.3. Book Management System
// Create a class Book.
// Data Members
//  bookId
//  title
//  author
//  price
// Member Functions
//  input()
//  display()
// Requirements
//  Create 4 book objects take input from user.
//  Display information of all books.
#include <iostream>
using namespace std;

class Book {
    int bookId;
    string title;
    string author;
    float price;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Book b[4];

    for(int i = 0; i < 4; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;
        b[i].input();
    }

    cout << "\n--- Book Details ---\n";
    for(int i = 0; i < 4; i++) {
        b[i].display();
    }

    return 0;
}