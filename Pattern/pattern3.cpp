#include<iostream>

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1; j<=i;j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
} 
