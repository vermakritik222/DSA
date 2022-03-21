// https://leetcode.com/problems/3sum-closest/
// 19/3/22

#include <iostream>
#include <vector>

using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{

    int diff = INT_MAX;
    int sum = 0;
    sort(nums.begin(), nums.end());

    for (int a = 0; a < nums.size(); a++)
    {

        int hi = nums.size() - 1;
        int lo = a + 1;

        while (hi > lo)
        {
            int temp = abs(target - nums[lo] - nums[hi] - nums[a]);
            if (temp <= diff)
            {
                diff = temp;
                sum = nums[lo] + nums[hi] + nums[a];
            }
            if (nums[lo] + nums[hi] + nums[a] == target)
            {
                return (nums[lo] + nums[hi] + nums[a]);
            }
            else if (nums[lo] + nums[hi] + nums[a] > target)
            {
                hi--;
            }
            else if (nums[lo] + nums[hi] + nums[a] < target)
            {
                lo++;
            }
        }
    }
    return sum;
}

int main()
{

    return 0;
}
