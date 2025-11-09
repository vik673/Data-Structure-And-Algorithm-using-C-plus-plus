#include<iostream>

//int (*funcPtr)(int,int) = add;
// it means that functptr is a pointer to the function which tackes two argument and return integer.
// add is function which is assigned to it.
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int main()
{
    int (*funcPtr)(int,int) = add;

   
    int result=  funcPtr(10,20);
    cout <<"addition: " << funcPtr(10,20) << " " << result << endl;
    
    funcPtr = &subtract;
    result=  funcPtr(10,20);
    cout << "subtraction: " << funcPtr(20,10) <<" " << result << endl;

    return 0;
}
