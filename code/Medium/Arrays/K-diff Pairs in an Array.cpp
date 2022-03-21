// https://leetcode.com/problems/k-diff-pairs-in-an-array/
// 21/3/22

#include <iostream>
#include <vector>

using namespace std;

int findPairs(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    int ans = 0;

    int j = 1;
    int i = 0;

    while (i < nums.size() && j < nums.size())
    {
        if (i == j || nums[j] - nums[i] < k)
        {
            j++;
        }
        else if (nums[j] - nums[i] > k)
        {
            i++;
        }
        else
        {
            i++;
            ans++;
            while (i < nums.size() && nums[i] == nums[i - 1])
            {
                i++;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}
