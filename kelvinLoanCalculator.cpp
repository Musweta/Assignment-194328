/*Create a C++ function to check if a customer is qualified for a loan given the conditions
below. The function name must be your first name followed by the word
LoanCalculator e.g fredLoanCalculator(). Capture the customer details from the user.
Write a main function to test your function*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare the variables
    string name, status;
    int age;
    double balance, period;

    // Capture customer details
    cout << "Enter full names: ";
    getline(cin, name); // Capture full name
    cout << "Enter age: ";
    cin >> age;  // Capture age

    // Check if age is greater than 22
    if (age <= 22) {
        cout << "Criteria for loan application not met (age must be above 22)\n";
        return 0; // Exit if age is not qualified
    }

    // Capture bank balance
    cout << "Enter bank balance: ";
    cin >> balance;
    
    // Check if bank balance is greater than 50,000
    if (balance <= 50000) {
        cout << "Criteria for loan application not met (bank balance must be greater than 50,000)\n";
        return 0; // Exit  if balance is not qualified
    }

    // Capture CRB status
    cout << "Enter CRB status (good/bad): ";
    cin >> status;
    
    // Check if CRB status is "good"
    if (status != "good") {
        cout << "Criteria for loan application not met (CRB status must be good)\n";
        return 0; // Exit  if CRB status is not good
    }

    // Capture the active period of being a customer
    cout << "Enter active period (in months): ";
    cin >> period;
    
    // Check if the period is greater than 6 months
    if (period <= 6) {
        cout << "Criteria for loan application not met (must have been a customer for more than 6 months)\n";
        return 0; // Exit if the customer period is not qualified
    }

    // If all conditions are met
    cout << "You qualify for the loan!\n";

    return 0;
}
