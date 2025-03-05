#include<iostream>

using namespace std;

int main()
{
    int a= 10;
    int b= 20;

    const int *p1 = &a; // Pointer to a constant integer
    // *p1 = 30       // Error : can not modif the value

    int *const p2 = &a; // constant pointer to an integer
    *p2 = 30;          // valid
    // p2 = &b;        // Error: can not modify the pointer

    const int *const p3 =&a; // onstant pointer to a const integer
    // *p3 = 40;             // error : can not modify the value
    // p3  = &b;             // can not modify the pointer

    return 0; 
}