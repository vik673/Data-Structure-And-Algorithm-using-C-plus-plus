#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int MAX_CHAR = 26;

bool checkPangram(string &s)
{
    vector<bool> vis(MAX_CHAR, false);
    for(int i=0;i<s.length();i++)
    {
        if('A' <= s[i] && s[i] <= 'Z')
          vis[s[i] - 'A'] =true;
        else if('a' <= s[i] && s[i] <='z')
           vis[s[i] - 'a']= true;
    }
    
    for(int i=0;i<MAX_CHAR;i++)
    {
        if(vis[i]==false)
          return false;
    }
    return true;
}
int main() {
    string s = "The quick brown fox jumps over the dog";
    if (checkPangram(s) == true)
        cout << "true";  
    else
        cout << "false";
    return 0;
}
