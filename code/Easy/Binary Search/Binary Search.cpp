// https://leetcode.com/problems/binary-search/
// 2/4/22
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int search(vector<int> &nums, int target)
{
    int hi = nums.size();
    int lo = 0;

    if (nums.size() == 1)
    {
        if (nums[lo] == target)
        {
            return lo;
        }
        else
        {
            return -1;
        }
    }

    while (lo <= hi)
    {
        int m = (lo + hi) / 2;
        if (nums[m] == target)
        {
            return m;
        }
        else if (nums[m] > target)
        {
            hi = m - 1;
        }
        else if (nums[m] < target)
        {
            lo = m + 1;
        }
    }
    return -1;
}

int main()
{

    return 0;
}
