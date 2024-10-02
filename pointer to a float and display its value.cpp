#include <iostream>
using namespace std;
int main() {
    float num = 3.14f;  
    float* ptr = &num;  
    cout << "Value of num: " << num << endl;
    cout << "Pointer pointing to value: " << *ptr << endl;  
    cout << "Address of num (held by pointer): " << ptr << endl;  
    return 0;
}

