//  https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/
// 3/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int shipWithinDays(vector<int> &weights, int days)
{
    int hi = 0;
    int lo = INT_MIN;
    int ans = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        lo = max(lo, weights[i]);
        hi += weights[i];
    }

    while (hi >= lo)
    {
        int mid = (hi + lo) / 2;
        int day = 1;
        int temp = 0;
        // cout<<mid<<" ";
        for (int i = 0; i < weights.size(); i++)
        {
            if (temp + weights[i] <= mid)
            {
                temp += weights[i];
            }
            else
            {
                day++;
                temp = weights[i];
            }
        }
        if (day <= days)
        {
            ans = mid;
            hi = mid - 1;
        }
        else if (day > days)
        {
            lo = mid + 1;
        }
    }

    return ans;
}

int main()
{

    return 0;
}
