#include<iostream>

using namespace std;

int main()
{
    int size = 5;
    int *arr = new int[size];

    for(int i=0;i<size;i++)
    {
        arr[i] = i+1;
    }

    for(int i=0;i<size;i++)
    {
        cout << arr[i] <<" ";
    }

    delete[] arr;
    return 0;
}