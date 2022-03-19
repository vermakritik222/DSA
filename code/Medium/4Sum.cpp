// https://leetcode.com/problems/4sum/
// 19/3/22

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{

    set<vector<int>> s;
    sort(nums.begin(), nums.end());

    if (nums.size() < 4)
    {
        vector<vector<int>> ans;
        return ans;
    }

    for (int i = 0; i < nums.size(); i++)
    {

        for (int j = i + 1; j < nums.size(); j++)
        {

            int hi = nums.size() - 1;
            int lo = j + 1;

            while (hi > lo)
            {

                if (nums[i] + nums[j] == target - nums[lo] - nums[hi])
                {
                    s.insert({nums[i], nums[j], nums[lo], nums[hi]});
                    hi--;
                    lo++;
                }
                else if (nums[i] + nums[j] > target - nums[hi] - nums[lo])
                {
                    hi--;
                }
                else
                {
                    lo++;
                }
            }
        }
    }
    vector<vector<int>> ans{s.begin(), s.end()};
    return ans;
}

int main()
{

    return 0;
}
