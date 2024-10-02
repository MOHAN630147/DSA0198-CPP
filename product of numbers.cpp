#include <iostream>
using namespace std;
int main() {
    int number, product = 1, digit;
    cout << "Enter a number: ";
    cin >> number;
    while (number > 0) {
        digit = number % 10;  
        product *= digit;     
        number /= 10;         
    }
    cout << "Product of the digits: " << product << endl;
    return 0;
}

