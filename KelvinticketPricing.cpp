/*Design a program for a cinema that calculates the ticket price based on the age of the
customer and the type of movie (e.g., regular or 3D). Use if, else if, and else statements
to determine the ticket price. */

#include <iostream>
using namespace std;

 double regularPrice = 1000;
 double threeDPrice = 1500;

int main() {
    int age;
    char movieType;
    
    cout << "Enter the age of the customer: ";
    cin >> age;
    
    cout << "Enter the movie type (R for Regular, T for 3D): ";
    cin >> movieType;
    
    double price = 0;
    
    if (age < 3) {
        cout << "Free admission for children under 3." << endl;
    } else if (age >= 3 && age <= 12) {
        price = regularPrice;
    } else if (age >= 13 && age <= 59) {
        price = regularPrice;
    } else if (age >= 60) {
        price = regularPrice * 0.50; // 50% discount for seniors
    } else {
        cout << "Invalid age entered." << endl;
    }
    
    if (movieType == 'T' || movieType == 't') {
        price *= 1.5; // 50% increase for 3D movies
    }
    
    cout << "Ticket price: Ksh" << price << endl;
    
    return 0;
}
