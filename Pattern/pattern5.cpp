#include<iostream>
/*

    *    
   ***
  *****
 *******
*********

space star space
 4   1   4
 3   3   3
 2   5   2
 1   7   1
 0   9   0
*/
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1; j++)
        {
            std::cout << " ";
        }

        for(int j=0;j<2*i+1; j++)
        {
            std::cout << "*";
        }
        for(int j=0;j<n-i-1; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
} 