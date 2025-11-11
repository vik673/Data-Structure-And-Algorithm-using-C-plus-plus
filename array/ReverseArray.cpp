#include <iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int>& arr)
{
   int left = 0;
   int right = arr.size()-1;
   while(left<=right)
   {
       swap(arr[left],arr[right]);
       left++;
       right--;
   }
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    reverseArray(arr);
    for(auto ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}
