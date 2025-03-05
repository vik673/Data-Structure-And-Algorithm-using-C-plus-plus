/*
Geek is learning about functions and calling a function with arguments. He learns that passing can take one of two forms: pass by value or pass by reference.

Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.

Example 1:

Input:
a = 1
b = 2
Output:
2 4
Explanation: 1 was passed by value whereas 2 passed by reference.
Example 2:

Input:
a = 10
b = 20
Output: 11 22
Explanation: 10 was passed by value whereas 20 passed by reference.
*/

//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
#include<vector>

using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
          int* aPoint = &a;
          int* bPoint = &b;
          passByRef(aPoint,bPoint);
          vector<int> arr(2);
          arr[0] = a;
          arr[1] = b;
          return arr;
    }
    
     void passByRef(int* a1, int* b1) {
        *a1= *a1+1;
        *b1=*b1+2;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
