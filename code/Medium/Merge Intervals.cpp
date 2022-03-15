// https://leetcode.com/problems/merge-intervals/
// 15/3/22

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    int i = 0;
    if (intervals.size() == 1)
    {
        return intervals;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> comp = intervals[0];

    while (i < intervals.size())
    {
        if (comp[0] <= intervals[i][0] && comp[1] >= intervals[i][1])
        {
            comp = {comp[0], comp[1]};
        }
        else if (comp[0] <= intervals[i][0] && comp[1] >= intervals[i][0])
        {
            comp = {comp[0], intervals[i][1]};
        }
        else
        {
            ans.push_back(comp);
            comp = intervals[i];
        }
        i++;
    }

    ans.push_back(comp);

    return ans;
}

int main()
{
    vector<vector<int>> x{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> ans = merge(x);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[" << ans[i][0] << "," << ans[i][1] << "]";
    }

    return 0;
}
