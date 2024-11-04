/*
This is where the functions created for the application reside.  
*/

#include <iostream>  //using for input and output of information
#include "function.h" //calls the header
using namespace std;  //ease of use so I do not have to add std:: to each cout or cin line

// Function for the Menu choices
void Menu() {
    cout << "Menu:\n";
    cout << "1. Check for Odd or Even\n";
    cout << "2. Compare Two Numeric Values\n";
    cout << "3. Exit\n";
    cout << "Please select your choice: ";
}

// Function to check if a number is odd or even anddisplays a message

void CheckForOddEven() {
    int num;
    cout << "Enter a number to check if it's even or odd: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even.\n";
    }
    else {
        cout << num << " is odd.\n";
    }
}

// Compares 2 numeric values to determine which one is higher, lower or equal
void CompareTwoValues() {
    int x, y;
    cout << "Please enter two numbers to compare: ";
    cin >> x >> y;

    if (x > y) {
        cout << x << " is greater than " << y << ".\n";
    }
    else if (x < y) {
        cout << x << " is less than " << y << ".\n";
    }
    else {
        cout << x << " is equal to " << y << ".\n";
    }
}
