#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatearray(vector<int>& arr, int& d)
{
  int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
  
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
 
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int d=2;
    rotatearray(arr, d);
    for(auto ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}
