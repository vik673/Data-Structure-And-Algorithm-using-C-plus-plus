#include<iostream>
#include<climits>

using namespace std;

int findFirstInfElemnet(int arr[], int low, int high)
{
 if(low>high) return -1;
 int mid = (low+high)/2;
 if((arr[mid] ==INT_MAX) && (arr[mid-1]!= INT_MAX))
 {
    return mid;
 }
 else if(arr[mid] < INT_MAX &&  (arr[mid-1] != INT_MAX))
 {
    return findFirstInfElemnet(arr, mid+1, high);
 }
 else
 {
    return findFirstInfElemnet(arr, low, mid-1);
 }
}

int main()
{
    int arr[] = { 2, 3, 5, 7, 8, 190, INT_MAX, INT_MAX, INT_MAX,
     INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};
    int size = sizeof(arr)/sizeof(*(arr+0));
    int index = -1;
    index = findFirstInfElemnet(arr, 0, size -1);
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