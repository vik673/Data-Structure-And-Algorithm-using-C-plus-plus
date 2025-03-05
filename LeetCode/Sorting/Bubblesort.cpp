#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After Using bubble sort: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Bubble sort" << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr,n);
    return 0;
}

/*
Time complexity:-

O(N2), (where N = size of the array), for the worst, and average cases.
Reason: If we carefully observe, we can notice that the outer loop, say i, is running from n-1 to 0 i.e. n times, and for each i,
the inner loop j runs from 0 to i-1. For, i = n-1, the inner loop runs n-1 times, for i = n-2, the inner loop runs n-2 times, 
and so on. So, the total steps will be approximately the following: (n-1) + (n-2) + (n-3) + ……..+ 3 + 2 + 1. 
*/