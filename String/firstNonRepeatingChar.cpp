#include <iostream>
#include<vector>
#include<stack>
const int MAX_CHAR = 26;

using namespace std;

char nonRep(const string &s)
{
    vector<int> freq(MAX_CHAR,0);
    for(char c : s)
    {
        freq[c-'a']++;
    }
    
    for(char c : s)
    {
        if(freq[c-'a']==1)
        {
            return c;
        }
    }
    return '$';
}


int main() {
    string s = "geeksforgeeks";
    cout << nonRep(s) << endl;
    return 0;
}
