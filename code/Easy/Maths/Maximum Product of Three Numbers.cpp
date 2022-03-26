// https://leetcode.com/problems/maximum-product-of-three-numbers/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int maximumProduct(vector<int> &nums)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int idx1, idx2, idx3;

    for (int i = 0; i < nums.size(); i++)
    {
        if (max1 <= nums[i])
        {
            max1 = nums[i];
            idx1 = i;
        }
        if (min1 > nums[i])
        {
            min1 = nums[i];
            idx3 = i;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] >= max2 && i != idx1)
        {
            max2 = nums[i];
            idx2 = i;
        }
        if (min2 > nums[i] && i != idx3)
        {
            min2 = nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= max3 && i != idx1 && i != idx2)
        {
            max3 = nums[i];
        }
    }

    long long int ans = max(max1 * max2 * max3, min1 * min2 * max1);

    return ans;
}

int main()
{

    return 0;
}
