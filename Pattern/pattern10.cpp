#include<iostream>

int main()
{
    int start =1;
    int n= 5;
    for(int i=0;i<n;i++)
    {
      if(i%2==0) start =1;
      else start =0;
      for(int j=0;j<i;j++){
      std::cout << start<< " ";
      start =1-start;
      }
      
      std::cout << std::endl;
    }
    return 0;
}