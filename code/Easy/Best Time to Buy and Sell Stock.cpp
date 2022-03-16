// /https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// 14-3-22

#include <iostream>
#include <vector>

using namespace std;

int bestTime(vector<int> prices)
{

    vector<int> pre;

    for (int i = 0; i < prices.size() - 1; i++)
    {
        pre.push_back(prices[i + 1] - prices[1]);
    }

    int i = 0;
    int maxSum = 0;

    while (i < pre.size())
    {
        int currentSum = 0;
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        currentSum += pre[i];
        maxSum = max(currentSum, maxSum);
        i++;
    }

    return maxSum;
}

int oder_n_slution()
{
    int b = prices[0], s = 0, p = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < b)
        {
            b = prices[i];
            s = 0;
        }
        else if (prices[i] > s)
        {
            s = prices[i];
            if (s - b > p)
            {
                p = s - b;
            }
        }
    }
    return p;
}

int main()
{

    vector<int> prices{7, 6, 4, 3, 1};
    int ans = bestTime(prices);
    cout << ans << " ";

    return 0;
}
