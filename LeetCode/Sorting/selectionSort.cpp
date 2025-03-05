#include<iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int mini = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;   
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
   }
  
   cout << "After selection sort" << endl;
   for(int i=0;i<n;i++)
   {
    cout << arr[i] <<  " ";
   }
    cout << "\n";
}

int main()
{
    int arr[] = {13,46,24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout << "Before selection sort " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }
    cout << "\n";
    selection_sort(arr,n);
    return 0;
}

/*
O(N2), (where N = size of the array), for the best, worst, and average cases.
Reason: If we carefully observe, we can notice that the outer loop, say i, is running from 0 to n-2 i.e. n-1 times, and
for each i, the inner loop j runs from i to n-1. For, i = 0, the inner loop runs n-1 times, for i = 1, the inner loop
runs n-2 times, and so on. So, the total steps will be approximately the following: (n-1) + (n-2) + (n-3) + ……..+ 3 + 2 + 1. 
The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n2/2 + n/2). 
*/