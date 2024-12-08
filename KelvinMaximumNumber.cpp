/*Write a C++ program using Switch…Case to determine the maximum number given
two numbers from a user. */

#include<iostream>
using namespace std;
int main(){
    //Declare the variable
    double number1, number2;
    int choice;
    //Prompt user to enter 2 numbers
    cout<<"Enter first number\n";
    cin>>number1;
    cout<<" Enter second number\n";
    cin>>number2;

// Determine which number is greater
    choice = (number1 > number2) ? 1 : (number1 < number2) ? 2 : 3;
// Switch case to display the maximum number
    switch (choice){
        case 1:
        cout<<"The maximum number is "<<number1<<endl;
        break;
        case 2:
        cout<<"The maximum number is "<<number2<<endl;
        break;
        case3:
        cout<<"The numbers are equal"<<number1<<endl;
        default:
        cout<<"Numbers not matching";

    }
    return 0;
}