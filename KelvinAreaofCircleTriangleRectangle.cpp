#include <iostream>

using namespace std;


int main() {


    int choice;
    double radius = 0, length = 0, width = 0, base = 0, height = 0;
    double circleArea;
    double rectangleArea;
    double triangleArea;

    do {
        cout << "\nShape Area Calculator\n";
        cout << "1. Calculate Circle Area\n";
        cout << "2. Calculate Rectangle Area\n";
        cout << "3. Calculate Triangle Area\n";
        cout << "4. Quit\n";
        
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                circleArea=3.142*radius*radius;
                cout << "Circle area: " << circleArea << endl;
                break;
            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                rectangleArea=length*width;
                cout << "Rectangle area: " << rectangleArea << endl;
                break;
            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                triangleArea=0.5*base*height;
                cout << "Triangle area: " << triangleArea << endl;
                break;
            case 4:
                cout << "Thank you for using the Calculator.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}