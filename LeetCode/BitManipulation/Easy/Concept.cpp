/*
Given a 32 bit unsigned integer num and an integer i. Perform following operations on the number - 

1. Get ith bit

2. Set ith bit

3. Clear ith bit

Note : For better understanding, we are starting bits from 1 instead 0. (1-based). You have to print space three space seperated values ( as shown in output without a line break) and do not have to return anything.
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
       vector<int> binaryNumberRep;
       
       //convert number into Binary
       while(num>0)
       {
           binaryNumberRep.push_back(num%2);
           num = num/2;
       }
       
        int number=0, ctr =0;   
       //get the ith bit
       for(int j=binaryNumberRep.size()-1;j>=0;j++)
       {
           ctr++;
           if(ctr==i){
             cout << binaryNumberRep[j] <<" ";
             binaryNumberRep[j] = 0x01;
           }
           number = 2*binaryNumberRep[j];
       }
       
        cout << number <<" "; 
        
        ctr =0;
       //clear the ith bit
       for(int j=binaryNumberRep.size()-1;j>=0;j++)
       {
           ctr++;
           if(ctr==i){
             binaryNumberRep[j] = 0x00;
           }
           number = 2*binaryNumberRep[j];
       }
      cout << number; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } 

*/

// GFG solution
#include <iostream>
using namespace std;

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // Get the ith bit
        int ithBit = (num >> (i - 1)) & 1;
        cout << ithBit << " ";

        // Set the ith bit
        int setIthBit = num | (1 << (i - 1));
        cout << setIthBit << " ";

        // Clear the ith bit
        int clearIthBit = num & ~(1 << (i - 1));
        cout << clearIthBit;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

/*
Get the ith Bit: (num >> (i - 1)) & 1 shifts the number right by (i-1) positions and then performs a bitwise
AND with 1 to get the ith bit.

Set the ith Bit: num | (1 << (i - 1)) shifts 1 left by (i-1) positions and then performs a bitwise OR
with the number to set the ith bit.

Clear the ith Bit: num & ~(1 << (i - 1)) shifts 1 left by (i-1) positions, negates it, and then performs 
a bitwise AND with the number to clear the ith bit.

*/
