// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int ispalindrome(string& s)
{
    int left =0;
    int right = s.length()-1;
    while(left<right)
    {
        if(s[left] != s[right])
          return 0;
        
        left++;
        right--;
    }
    return 1;
}
int main() {
   string s= "aba";
   if(ispalindrome(s))
   {
       cout << "String is palindrome" << endl;;
   }
   else
   {
       cout << "String is not palindrome" << endl;
   }
    return 0;
}
