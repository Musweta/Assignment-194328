/*   Write a program for a library that calculates the late fee for returning a book. The fine
varies based on the number of days late and the type of book (e.g., regular, children's,
or reference). Use if, else if, and else statements to determine the fine amount.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables
    int daysLate;
    string bookType;
    double fine = 0.0;

    // Prompt the user for input
    cout << "Enter the number of days late: ";
    cin >> daysLate;

    // Input validation for days late
    if (daysLate < 0) {
        cout << "Please enter a positive value for days late.\n";
    
    }
    // Ask for the type of book
    cout << "Enter the type of book (regular, children's, reference): ";
    cin.ignore();        // to Clear the input buffer before reading book type
    getline(cin, bookType);

    // Calculate the fine based on the book type and days late
    if (bookType == "regular") {
        if (daysLate > 0) {
            fine = daysLate * 100; // Regular book: Ksh 100 per day late
        }
    } else if (bookType == "children's") {
        if (daysLate > 0) {
            fine = daysLate * 50; // Children's book: Ksh 50 per day late
        }
    } else if (bookType == "reference") {
        if (daysLate > 0) {
            fine = daysLate * 200; // Reference book: ksh 200 per day late
        }
    } else {
        cout << "Invalid book type. Please enter 'regular', 'children's', or 'reference'.\n";
        return 0;
    }

    // Display the fine amount
    if (fine > 0) {
        cout << "The late fee for returning the " << bookType << " book is Ksh " << fine << ".\n";
    } else {
        cout << "No fine (the book is on time or returned early).\n";
    }

    return 0;
}
