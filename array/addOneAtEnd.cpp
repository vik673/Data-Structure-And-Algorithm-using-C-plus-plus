//program to add element at the front
#include <iostream>
#include<vector>
using namespace std;

vector<int> addOne(vector<int>& arr)
{
  int n = arr.size();
  int sum =0, carry =1;
  vector<int> temp;
  for(int i=n-1;i>=0;i--)
  {
     sum = arr[i] + carry;
     arr[i] = sum%10;
     carry = sum/10;
  }
  if(carry)
  {
      arr.insert(arr.begin(),carry);
  }
  return arr;
}

int main() {
    vector<int> arr = {9, 9, 9};
    vector<int> res = addOne(arr);
    for(auto i:res) {
        cout << i;
    }
    return 0;
}
