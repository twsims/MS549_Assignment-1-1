/*
Terrance Sims
MS 549 Data Structures and Algorithms
Assignment 1-1
Create a C++ application with 3 menu choices with functions and loop through a menu
*/

#include <iostream>  // use this to handle input and output streams
#include "function.h" // use this to include my self created functions 
using namespace std;  // use this to use the cin and cout functions

/*
 The meat of the application starts here.  Used a case statement as the professor briefly mentioned it 
 in class so I thought I would give it a try in this application.
*/
int main() {  
    int choice;  // create variable to hold choice by the user

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

    return 0; //has to return a value here.  
}
