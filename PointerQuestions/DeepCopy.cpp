#include<iostream>
using namespace std;

// A deep copy creates a new copy of the dynamically allocated memory. So the copied object has its own separate copy of the data.

class Deep{
    public:
    int* data;
    
    Deep(int val)
    {
        data = new int(val);
    }
    
    //Shallow copy constructor
    Deep(const Deep& source) {
        data = new int(*source.data);// allocate new memory //and copy constructor
    }
    
    void showData()
    {
        cout << "Data: " << *data << endl;
    }
    
    ~Deep(){
        delete data;
    }
};

int main()
{
    Deep obj1(100);
    Deep obj2 = obj1; // shallow copy
    
    obj1.showData();
    obj2.showData();
    return 0;
}
//Each object manages its own memory, so there's no conflict during destruction. This is safer and preferred when dealing with dynamic memory.
