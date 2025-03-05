#include<iostream>

using namespace std;

int findValueWithBinarySearch(int arr[], int low, int high)
{
    if(low > high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==mid)
    {
        return mid;
    }
    else if(arr[mid]< mid)
    {
        return findValueWithBinarySearch(arr, mid+1,high);
    }
    else
    {
        return findValueWithBinarySearch(arr, low, mid-1);
    }
}

int main()
{
    int arr[] = { 2,2,3,3,5,6,10};
    // think that input should be corect.

    int size = sizeof(arr)/sizeof(*(arr+0));
    int index = -1;
    index = findValueWithBinarySearch(arr,0,size);
    if(index == -1)
    {
        cout <<"No such value exist" << endl;
    }
    else
    {
        cout << "index value " << index << " value at index " << arr[index] << endl;
    }
    return 0;
}