#include<iostream>


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
    int (*funcPtr)(int,int);

    funcPtr = add;
    cout <<"addition: " << funcPtr(10,20) << endl;

    funcPtr = subtract;
    cout << "subtraction: " << subtract(20,10) << endl;

    return 0;
}