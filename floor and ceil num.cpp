#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedFloor = floor(num);
    int roundedCeil = ceil(num);

    cout << "Floor value: " << roundedFloor << endl;
    cout << "Ceil value: " << roundedCeil << endl;

    return 0;
}

