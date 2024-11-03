// main.cpp

#include <iostream>
#include "function.h"
using namespace std;

int main() {
    int choice;

    do {
        Menu();
        cin >> choice;

        switch (choice) {
        case 1:
            CheckForOddEven();
            break;
        case 2:
            CompareTwoValues();
            break;
        case 3:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
