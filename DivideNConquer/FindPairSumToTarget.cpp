#include<iostream>
#include<algorithm>

using namespace std;

bool findPairSumEqualToTraget(int arr[], int size, int target)
{
  int right = size-1, left = 0;
  sort(arr, arr + size);
  while(left < right)
  {
  if((arr[left]+ arr[right]) == target)
  {
    return true;
  }
  else if((arr[left]+ arr[right]) < target)
   {
    left++;
   }
   else
   {
    right--;
   }
  }
  return false;
}

int main()
{
        int arr[] = { 2, 4, 6, 12, 24, 25, 28};
        int target = 29;
        int size = sizeof(arr)/sizeof(*(arr+0));
        bool isEqualToTarget = false;
        isEqualToTarget = findPairSumEqualToTraget(arr, size, target);
        if(isEqualToTarget)
        {
            cout << "Target sum is present" << endl;
        }
        else{
            cout << "Traget sum is not present" << endl;
        }

        return 0;
}