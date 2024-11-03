// function.cpp

#include <iostream>
#include "function.h"
using namespace std;

void Menu() {
    cout << "Menu:\n";
    cout << "1. Check for Odd or Even\n";
    cout << "2. Compare Two Numeric Values\n";
    cout << "3. Exit\n";
    cout << "Please select your choice: ";
}

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
