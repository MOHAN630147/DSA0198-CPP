#include <iostream>
using namespace std;
int main() {
    int num = 42;  
    int* ptr = &num;  
    cout << "Value of num: " << num << endl;
    cout << "Pointer pointing to value: " << *ptr << endl; 
    cout << "Address of num (held by pointer): " << ptr << endl; 
    return 0;
}

