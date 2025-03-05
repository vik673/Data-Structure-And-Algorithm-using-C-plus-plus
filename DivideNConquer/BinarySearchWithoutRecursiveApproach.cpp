#include<iostream>

using namespace std;

int BinarySearch(int arr[], int low, int high, int x)
{
   int mid = (low + high)/2;
   while(low<=high)
   {
   if(arr[mid] == x)
   {
     return mid;
   }
   else if(arr[mid]<x)
   {
    low = mid+1;
   }
   else{
    high = mid -1;
    }
  }
   return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 12, 24, 25, 28};
    int high = sizeof(arr)/sizeof(*(arr+0));
    int low =0;
    int index = -1;
    int x;
    cout<<"Enter the value to be search" <<endl;
    cin>>x;
    index = BinarySearch(arr, low, high, x);
    if(index == -1)
    {
        cout<<"value is not present in the given array" << endl;
    }
    else{
        cout<<"Search value is present at index " << index << endl;
    }
    return 0;
}