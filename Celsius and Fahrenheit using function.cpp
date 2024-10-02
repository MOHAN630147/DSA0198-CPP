#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp;
    int choice;

    cout << "Temperature Conversion Menu: " << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        double fahrenheit = celsiusToFahrenheit(temp);
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        double celsius = fahrenheitToCelsius(temp);
        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    } else {
        cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}

