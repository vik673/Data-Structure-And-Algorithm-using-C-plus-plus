#include <iostream>
#include<algorithm>
using namespace std;

int findEqlPoint(string s)
{
    int n = s.size(), openCnt =0, closeCnt =0;
    
    for(int i=0; i<n;++i)
    {
        if(s[i]==')')
          closeCnt++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(openCnt == closeCnt)
          return i;
          
        if(s[i]=='(')
          openCnt++;
          
        if(s[i]==')')
         closeCnt--;
    }

    return -1;
}
int main() {
    string s = "))";
    
    cout << findEqlPoint(s) << endl;
    return 0;
}
