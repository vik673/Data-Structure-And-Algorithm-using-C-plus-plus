#include <iostream>
#include<string>
using namespace std;
void reverseString(string& s)
{
    int left = 0;
    int right = s.length()-1;
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
int main() {
    string s = "abcd";
    cout << "original string is " << s << endl;
    reverseString(s);
    cout << "reverse string is " << s << endl;
    return 0;
}
