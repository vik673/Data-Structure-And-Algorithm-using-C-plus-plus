#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalinsent(string &s)
{
    string s1="";
    for(char ch : s)
    {
        if(isalnum(ch))
        {
            s1.push_back(tolower(ch));
        }
    }
    
    string rev = s1;
    reverse(rev.begin(),rev.end());
    return s1 == rev;
}

int main() {
    string s = "Too hot to hoot";
    cout << (isPalinsent(s) ? "true" :"false") <<endl;
    return 0;
}
