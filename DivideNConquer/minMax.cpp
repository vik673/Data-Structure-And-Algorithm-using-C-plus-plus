#include<iostream>

using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair findMinMax(int arr[],int low, int high)
{
  Pair Result;
  if(low == high)
  {
    Result.min = arr[low];
    Result.max = arr[high];
  }
  else if(high == low+1){
      Result.min = min(arr[low], arr[high]);
      Result.max = max(arr[low],arr[high]);
  }
  else{
    int mid=(low+high)/2;
    Pair left = findMinMax(arr,low,mid);
    Pair right = findMinMax(arr,mid+1,high);
    Result.min = min(left.min,right.min);
    Result.max = max(left.max,right.max);
  }
  return Result;
}


int main(){
    int arr[] = {3, 5,6,8,9,10};
    int low = 0;
    int high = sizeof(arr)/sizeof(*(arr+0));
    Pair result= findMinMax(arr,low,high);
    cout<<result.min<<endl;
    cout<<result.max<<endl;
    return 0;
}