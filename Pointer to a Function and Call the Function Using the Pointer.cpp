#include <iostream>
using namespace std;
void greet() {
    cout << "Hello from the function!" << endl;
}
int main() {
    void (*funcPtr)() = &greet;
    funcPtr();
    return 0;
}

