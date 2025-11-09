#include<iostream>
using namespace std;

// A shallow copy copies all the member values as-is, including pointers. This means both the original and the copied object will point to the same memory location.

class Shallow{
    public:
    int* data;
    
    Shallow(int val)
    {
        data = new int(val);
    }
    
    //Shallow copy constructor
    Shallow(const Shallow& source) : data(source.data){}
    
    void showData()
    {
        cout << "Data: " << *data << endl;
    }
    
    ~Shallow(){
        delete data;
    }
};

int main()
{
    Shallow obj1(100);
    Shallow obj2 = obj1; // shallow copy
    
    obj1.showData();
    obj2.showData();
    return 0;
}
// Both obj1 and obj2 point to the same memory. 
//When the destructor runs, it will try to delete the same memory twice, causing a crash or undefined behavior.
