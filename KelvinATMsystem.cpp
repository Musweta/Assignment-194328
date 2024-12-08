/*Create a simple ATM withdrawal program that verifies the user's account balance and
transaction limits before processing a withdrawal. Use if and else statements to handle
different scenarios, such as insufficient funds or exceeding daily limits. */

#include <iostream>
using namespace std;

int main() {
    // Initialize account details
    double accountBalance = 100000.00; // User's account balance
    double dailyWithdrawalLimit = 50000.00; // Daily withdrawal limit
    double totalWithdrawnToday = 0.00; // Total withdrawn today
    double withdrawalAmount;

    // Prompt the user for the withdrawal amount
    cout << "Welcome to the ATM!" << endl;
    cout << "Your current account balance is: Ksh " << accountBalance << endl;
    cout << "Enter the amount you wish to withdraw: ";
    cin >> withdrawalAmount;

    // Check if the withdrawal amount is valid
    if (withdrawalAmount <= 0) {
        cout << "Invalid amount" << endl;
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds" << endl;
    } else if (totalWithdrawnToday + withdrawalAmount > dailyWithdrawalLimit) {
        cout << "Withdrawal exceeds daily limit of Ksh " << dailyWithdrawalLimit << "." << endl;
        cout << "You have already withdrawn Ksh " << totalWithdrawnToday << " today." << endl;
    } else {
        // Process the withdrawal
        accountBalance -= withdrawalAmount; // Deduct from account balance
        totalWithdrawnToday += withdrawalAmount; // Update total withdrawn today
        cout << "Transaction successful!" << endl;
        cout << "You have withdrawn Ksh " << withdrawalAmount << "." << endl;
        cout << "Your new account balance is: Ksh " << accountBalance << endl;
    }

    return 0;
}