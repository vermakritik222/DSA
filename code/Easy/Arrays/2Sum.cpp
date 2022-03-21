// https://leetcode.com/problems/two-sum/
// 14-3-22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> nums, int targate)
{
    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(targate - nums[i]) != mp.end())
        {
            ans.push_back(mp[targate - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mp[nums[i]] = i;
    }

    return ans;
}

int main()
{

    vector<int> nums{3, 3};
    int target = 6;
    vector<int> ans = twoSum(nums, target);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
