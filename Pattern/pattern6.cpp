#include<iostream>
/*

*********
 *******
  *****
   ***  
    *  

space star space
 0   9   0
 1   7   1
 2   5   2
 3   3   3
 4   1   4
*/
int main()
{
    int n=5;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-i-1;j>=0; j--)
        {
            std::cout << " ";
        }

        for(int j=2*i+1;j>0; j--)
        {
            std::cout << "*";
        }
        for(int j=n-i-1;j>=0; j--)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}