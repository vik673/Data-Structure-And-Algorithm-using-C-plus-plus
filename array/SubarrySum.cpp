#include <iostream>
#include<vector>
using namespace std;

int sumArraySum(vector<int>& arr)
{
    int n = arr.size();
    int result =0, temp =0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j<n;j++)
        {
            temp+=arr[j];
            result+=temp;
        }
    }
    return result;
}
int main() {
    vector<int> arr = {1,4,5,3,2};
    int n=arr.size();
    cout << sumArraySum(arr);
    return 0;
}
