/*Develop a program for a shopping cart that calculates the total cost after applying
different discounts based on the purchase amount. Use if, else if, and else statements to
determine which discount to apply. */

#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    double totalCost = 0;
    double discountAmount = 0;

    cout << "Enter the purchase amount: Ksh";
    cin >> purchaseAmount;

    // Calculate total cost based on purchase amount
    if (purchaseAmount <= 100) {
        totalCost = purchaseAmount;
        cout << "No discount applied." << endl;
    } else if (purchaseAmount <= 200) {
        totalCost = purchaseAmount * 0.95; // 5% discount
        discountAmount = purchaseAmount * 0.05;
        cout << "5% discount applied." << endl;
    } else if (purchaseAmount <= 400) {
        totalCost = purchaseAmount * 0.90; // 10% discount
        discountAmount = purchaseAmount * 0.10;
        cout << "10% discount applied." << endl;
    } else if (purchaseAmount <= 800) {
        totalCost = purchaseAmount * 0.80; // 20% discount
        discountAmount = purchaseAmount * 0.20;
        cout << "20% discount applied." << endl;
    } else {
        totalCost = purchaseAmount * 0.75; // 25% discount
        discountAmount = purchaseAmount * 0.25;
        cout << "25% discount applied." << endl;
    }

    // Display results
    cout << "Total cost after discount: Ksh" << totalCost << endl;
    cout << "Discount amount: Ksh " << discountAmount << endl;

    return 0;
}
