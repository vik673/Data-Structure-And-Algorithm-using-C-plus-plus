#include <iostream>
using namespace std;

class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int value) {
        data = new int(value);
        cout << "Constructor called\n";
    }

    // Copy Constructor (Deep Copy)
    MyClass(const MyClass& source) {
        data = new int(*source.data); // allocate new memory and copy value
        cout << "Copy Constructor called\n";
    }

    void showData() {
        cout << "Data: " << *data << endl;
    }

    // Destructor
    ~MyClass() {
        delete data;
        cout << "Destructor called\n";
    }
};

int main() {
    MyClass obj1(10);       // Constructor
    MyClass obj2 = obj1;    // Copy Constructor

    obj1.showData();
    obj2.showData();

    return 0;
}
