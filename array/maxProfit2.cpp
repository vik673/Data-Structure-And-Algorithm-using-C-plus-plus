//Program to calculate maximum profit
#include <iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int res =0;
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i-1]<prices[i])
        res += prices[i] - prices[i-1];
    }
    return res;
}
int main() {
   vector<int> prices = { 100, 180, 260, 310, 40, 535, 695 };
    cout << maxProfit(prices) << endl;
    return 0;
}
