#include <iostream>
#include<vector>

using namespace std;

int getSecondLargest(vector<int>& arr)
{
    int first=-1, second =-1, third = -1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]<first && arr[i]>second)
        {
             third = second;
            second = arr[i];
        }
        else if(arr[i]<second && arr[i]>first)
        {
            third = arr[i];
        }
    }
    return third;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);

    return 0;
}
