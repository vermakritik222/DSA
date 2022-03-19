// https://leetcode.com/problems/find-the-duplicate-number/
// 19/3/22

#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            ans = nums[i];
            break;
        }
        mp[nums[i]] = i;
    }
    return ans;
}

int main()
{

    return 0;
}
