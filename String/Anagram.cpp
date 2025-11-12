#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

bool areAnagrams(string s1, string s2)
{
    if(s1.length() != s2.length())
      return false; 
    int freq[26] = {0};    
    for(int i=0; s1[i]!='\0'; i++)
      freq[s1[i]-'a']++;
    
    for(int i=0; s2[i]!='\0'; i++)
      freq[s2[i]-'a']--;
      
    for(int i=0; i< 26;i++)
    {
        if(freq[i] !=0)
          return false;
    }   
  return true;
}
int main() {
    char s1[] = "geeks";
    char s2[] = "kseeg";
    
    if(areAnagrams(s1,s2))
      cout << "true" << endl;
    else
      cout << "false" << endl;
      
    return 0;
}
