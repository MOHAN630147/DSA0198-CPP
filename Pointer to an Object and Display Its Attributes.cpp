#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Person p = {"John", 30};  
    Person* ptr = &p; 
    ptr->display();
    return 0;
}

