//program to find max consecutive number
#include <iostream>
#include<vector>
#include<algorithm>
#define INT_MIN -65552
using namespace std;

int maxConseOnce(vector<int>& arr)
{
  int maxCount =0, count =0, prev = -1;
  for(auto num : arr)
  {
     if((prev^num) == 0)
     {
         count++;
     }
     else
     {
         maxCount = max(maxCount, count);
         count=1;
     }
     prev = num;
  }
  return max(maxCount, count);
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 1, 1};
    cout << "maximum consecutive number is " << maxConseOnce(arr) << endl;
    return 0;
}
