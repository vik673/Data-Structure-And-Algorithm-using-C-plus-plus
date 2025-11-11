#include <iostream>
#include<vector>

using namespace std;

void reverseArrayInGroup(vector<int>& arr, int& k)
{
   int left, right;
   int n= arr.size();
   for(int i=0;i<arr.size();i=i+k)
   {
       left =i;
       right = min(i+k-1,n-1);
       while(left<=right)
          swap(arr[left++],arr[right--]);
   }
 
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int k=2;
    reverseArrayInGroup(arr, k);
    for(auto ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}
