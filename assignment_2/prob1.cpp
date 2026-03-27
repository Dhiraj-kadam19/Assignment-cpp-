// Q. 
// Create a cclass Employee

// Data Members:
// empId
// name
// salary
// static int totalEmployees
// Global variable string companyName

// Requirements:
// Constructor should initialize values
// Each time object is created → increment totalEmployees
// Function display()
// Static function showTotalEmployees()

// Create 5 employee objects in main and display:
// All employee details
// Total employees created
// Display company name in display function



#include <iostream>
using namespace std;

// Global variable
string companyName = "TechCorp";

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    static int totalEmployees;

    // Constructor
    Employee(int id, string n, float s) {
        empId = id;
        name = n;
        salary = s;
        totalEmployees++; // increment on object creation
    }

    // Display function
    void display() {
        cout << "Company: " << companyName << endl;
        cout << "Emp ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "----------------------" << endl;
    }

    // Static function
    static void showTotalEmployees() {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};

// Initialize static variable
int Employee::totalEmployees = 0;

int main() {
    // Creating 5 employees
    Employee e1(1, "Amit", 50000);
    Employee e2(2, "Neha", 55000);
    Employee e3(3, "Rahul", 60000);
    Employee e4(4, "Sneha", 52000);
    Employee e5(5, "Kiran", 58000);

    // Display all employee details
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    // Display total employees
    Employee::showTotalEmployees();

    return 0;
}