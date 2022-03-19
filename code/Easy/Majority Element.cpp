// https://leetcode.com/problems/majority-element/
// 19/3/22

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{

    int majority = nums.size() / 2;

    int majority_element;

    int occurrence = 0;

    unordered_map<int, int> mp;

    if (nums.size() == 1)
    {
        return nums[0];
    }
    for (int i = 0; i < nums.size(); i++)
    {

        if (mp.find(nums[i]) != mp.end())
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > occurrence)
            {
                occurrence = mp[nums[i]];
                majority_element = nums[i];
            }
        }
        mp[nums[i]]++;
    }
    if (majority_element > majority)
    {
        return majority_element;
    }
    return majority_element;
}

int main()
{

    return 0;
}
