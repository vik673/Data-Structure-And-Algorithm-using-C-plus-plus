#include<iostream>

using namespace std;

double powerOfElement(int a,int n)
{
   if(n==0) return 1;
   int temp = powerOfElement(a,n/2);
   if(n%2==0)
   {
      return temp * temp;
   } 
   else
   {
     return a * temp * temp;
   }
}

int main()
{
    int a = 2, n=5;
    cout << "element :" << a<<" power: "<< n << "power of the lement is:  " << powerOfElement(a, n)<< endl; 
    return 0;
}