#include <iostream>

#define INT_MAX 65535
#define INT_MIN -65535
using namespace std;
class Solution
{
    public:
    int myAtoi(string s)
    {
        int i=0;
        while(s[i]==' ')
         i++;

        bool negative = s[i] == '-';
        bool positive = s[i] == '+';
        positive == true ? i++:i;
        negative == true ? i++:i;
        double num =0;
        while(i<s.length() && s[i]>='0' && s[i]<='9')
        {
            num = num*10 + (s[i] -'0');
            i++;
        }
        num = negative ? -num : num;
        
        num = (num> INT_MAX) ? INT_MAX : num;
        num = (num<INT_MIN) ? INT_MIN : num;
        return num;
    }
};


int main() {
    string s = " -042";
    Solution s1;
    cout << s1.myAtoi(s) << endl;
    return 0;
}
