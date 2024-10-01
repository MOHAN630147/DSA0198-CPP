#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    double addition = num1 + num2;
    double subtraction = num1 - num2;
    double multiplication = num1 * num2;

    if (num2 != 0) {
        double division = num1 / num2;
        double modulo = fmod(num1, num2);

        cout << "Addition: " << addition << endl;
        cout << "Subtraction: " << subtraction << endl;
        cout << "Multiplication: " << multiplication << endl;
        cout << "Division: " << division << endl;
        cout << "Modulo: " << modulo << endl;
    } else {
        cout << "Error: Division and modulo by zero is not allowed." << endl;
    }

    return 0;
}

