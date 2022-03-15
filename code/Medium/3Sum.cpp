#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Best approach
vector<vector<int>> TowPointer_threeSum(vector<int> &nums)
{
    set<vector<int>> s;
    sort(nums.begin(), nums.end());
    int priviousA;

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums.size() < 3)
        {
            vector<vector<int>> ans;
            return ans;
        }

        int a = nums[i];
        if (priviousA == a)
        {
            continue;
        }
        int lo = i + 1;
        int hi = nums.size() - 1;

        while (hi > lo)
        {
            if (nums[hi] + nums[lo] + a == 0)
            {
                s.insert({a, nums[lo], nums[hi]});
                hi--;
                lo++;
            }
            else if (nums[hi] + nums[lo] + a > 0)
            {
                hi--;
            }
            else if (nums[hi] + nums[lo] + a < 0)
            {
                lo++;
            }
        }
        priviousA = a;
    }
    vector<vector<int>> ans{s.begin(), s.end()};
    return ans;
}

// TLE
vector<vector<int>> brutforce_threeSum(vector<int> &nums)
{
    set<vector<int>> s;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    s.insert(temp);
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
