// find the repeating and missing element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> FindMissNRepeating(vector<int>& arr)
{
   int n = arr.size();
   // frequency array to count the occurance
   vector<int> freq(n+1,0);
   int repeating = -1, missing = -1;
   
   for(int i=0;i<n;i++)
      freq[arr[i]]++;
   
   for(int i=1;i<=n;i++)
   {
       if(freq[i]==0) missing =i;
       else if(freq[i]==2) repeating = i;
   }
   
   return {repeating, missing};
}
int main() {
    vector<int> arr = {3,2,3};
    vector<int> ans = FindMissNRepeating(arr);
    cout << "repeating " << ans[0] << " Missing " << ans[1] << endl;
    return 0;
}
