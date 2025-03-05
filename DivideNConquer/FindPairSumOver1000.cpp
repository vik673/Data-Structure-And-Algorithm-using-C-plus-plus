#include<iostream>

using namespace std;

bool hasPairSumOver1000(int arr[], int n)
{
   if(n<2) return false;
   return ((arr[n-1]+arr[n-2])> 1000);
}

int main()
{
    int arr[] = {500, 501, 600, 601};
    int n = sizeof(arr)/sizeof(*(arr+0));
    cout << "Pair exist " << (hasPairSumOver1000(arr, n) ? "Yes" : "No") << endl;
    return 0;
}
 