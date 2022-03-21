// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
// 16/3/22

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
    vector<int> pre;
    int maxprof = 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        pre.push_back(prices[i + 1] - prices[i]);
    }

    for (int i = 0; i < pre.size(); i++)
    {
        if (pre[i] > 0)
        {
            maxprof += pre[i];
        }
    }
    return maxprof;
}

int main()
{

    return 0;
}
