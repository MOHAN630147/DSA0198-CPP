#include <iostream>
using namespace std;
int main() {
    float arr[] = {1.1f, 2.2f, 3.3f, 4.4f};  
    float* ptr = arr;  
    cout << "Float array elements: ";
    for (int i = 0; i < 4; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}

