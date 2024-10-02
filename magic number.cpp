#include <iostream>
using namespace std;
int main() {
    int num, sum=0;
    cout << "Enter a number: ";
    cin >> num;
    while (num >= 10) {

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    if (num == 1)
        cout << "Magic number!" << endl;
    else
        cout << "Not a magic number." << endl;
    return 0;
}

