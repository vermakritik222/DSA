// https://leetcode.com/problems/top-k-frequent-elements/submissions/
// 2/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (int i = 0; i < k; i++)
    {
        int temp = INT_MIN;
        int push = INT_MIN;

        for (auto x : mp)
        {
            if (x.second > temp)
            {
                temp = x.second;
                push = x.first;
            }
        }
        ans.push_back(push);
        mp[push] = -1;
    }
    return ans;
}

int main()
{

    return 0;
}
