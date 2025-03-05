#include<iostream>

int main()
{  
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for(int i=3;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}