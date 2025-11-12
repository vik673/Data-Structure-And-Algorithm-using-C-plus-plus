#include <iostream>
#include<algorithm>
using namespace std;
char rchar(int n)
{
    if(n >= 0 && n <=9)
      return (char)n+48;
    return (char)(n-10+65);
}
string decTohex(int n)
{
    string ans ="";
    while(n>0)
    {
        ans = ans + rchar(n%16);
        n=n/16;
    }
    return ans;
}
string encryptString(string s, int n)
{
    string ans ="";
    
    for(int i=0;i<n;i++)
    {
        char ch = s[i];
        int count=0;
        string hex;
        while(i<n && s[i]==ch)
        {
        count++;
        i++;
        }
        i--;
        hex = decTohex(count);
        ans +=ch;
        ans +=hex;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
    string s = "abc";
    int n= s.size();
    
    cout << encryptString(s,n) << endl;
    return 0;
}
