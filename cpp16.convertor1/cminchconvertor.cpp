#include <iostream>

using namespace std;

int main() {
    double centimeters, inches, totalInches;
    int feet;
    char unit;

    cout << "******** Length Converter (Imperial <-> Metric) ******" << endl;
    cout << "M - Convert from Centimeters to Feet/Inches" << endl;
    cout << "I - Convert from Feet/Inches to Centimeters" << endl;
    cout << "Enter your choice: ";
    cin >> unit;

    if (unit == 'I' || unit == 'i') {

        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        
        totalInches = (feet * 12) + inches; 
        centimeters = totalInches * 2.54;

        cout << "Result: " << feet << " ft " << inches << " in = " << centimeters << " cm" << endl;
    }
    else if (unit == 'M' || unit == 'm') {
        
        cout << "Enter length in centimeters: ";
        cin >> centimeters;

        totalInches = centimeters / 2.54;
        
        feet = static_cast<int>(totalInches) / 12;
        inches = totalInches - (feet * 12);

        cout << "Result: " << centimeters << " cm = " << feet << " ft and " << inches << " in" << endl;
    }
    else {
        cout << "Error: Invalid input. Please enter M or I." << endl;
    }

    cout << "******************************************************" << endl;

    return 0;
}