
#include <iostream>
#include<vector>
#include<algorithm>
#define INT_MIN -65552
using namespace std;

int maxProduct(vector<int>& arr)
{
    int first=INT_MIN, second =INT_MIN, third = INT_MIN;
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
        else if(arr[i]<second && arr[i]>third)
        {
            third = arr[i];
        }
    }
    cout << first<< " " << second << " " << third << endl;
    return first*second*third;
 
}

int main() {
    vector<int> arr = {-10, -3, -5, -6, -20};
    cout << "Maximum product is " << maxProduct(arr) << endl;
    return 0;
}
