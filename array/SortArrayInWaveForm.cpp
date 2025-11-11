//program to sort arra in waveform
#include <iostream>
#include<vector>
using namespace std;

void waveForm(vector<int>& arr)
{
 int n = arr.size();
  for(int i=1;i<n;i=i+2)
  {
      swap(arr[i-1],arr[i]);
  }
}

int main() {
    vector<int> arr = {10, 20, 30, 40 ,50};
    waveForm(arr);
    for(auto num : arr)
    {
        cout << num << " ";
    }
    return 0;
}
