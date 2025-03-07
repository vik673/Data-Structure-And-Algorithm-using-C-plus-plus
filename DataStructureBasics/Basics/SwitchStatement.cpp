/*
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

Note : A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

Examples :

Input: choice = 1, R = 5
Output: 78.53981633974483
Explaination: The choice is 1. So we have to calculate the area of the circle.
Input: choice = 2, L = 5, B = 10
Output: 50
Explaination: Here we have to calculate the area of the rectangle.
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)
*/


#include<iostream>
#include<vector>
#include<cmath>
#include <iomanip>
#include <ios>
#include <corecrt_math_defines.h>

using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice)
        {
            case 1:
              return M_PI*arr[0]*arr[0];
            case 2:
              return arr[0]*arr[1];
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);

        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);
        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;

            cout<<res<<endl;       
    }
}

// } Driver Code Ends