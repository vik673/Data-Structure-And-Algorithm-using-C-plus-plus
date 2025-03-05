#include<iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int value)
{
        if(low > high) return -1;
        int mid = (low+high)/2;
        if(arr[mid] == value)
           return mid;
        else if(arr[mid]>value)
        {
           return binarySearch(arr,low,mid-1,value);
        }
        else
        {
           return binarySearch(arr,mid+1,high,value);
        }
}
    
int main()
{
    int arr[] = {3,4,5,7,8,9,10};
    int low = 0;
    int index = -1;
    int value = 3;
    int high = sizeof(arr)/sizeof(*(arr+0));
    index = binarySearch(arr,low,high-1,value);
    if(index == -1)
    {
        cout<<"Item is not present in the given array: "<< endl;
    }
    else{
        cout<<"Item "<< arr[index] << " is present at " <<  index <<" in the given array" << endl;
    }
    return 0;
}