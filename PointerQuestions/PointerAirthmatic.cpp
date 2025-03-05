#include<iostream>

using namespace std;

void reverseArray(int *arr, int size)
{
    int *start= arr;
    int *end = arr+size-1;

    while(start < end)
    {
        swap(*start,*end);
        start++;
        end--;    
    }
}
    
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/ sizeof(arr[0]);

    reverseArray(arr, size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
    