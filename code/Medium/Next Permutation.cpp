// https://leetcode.com/problems/next-permutation/
// 16/3/22

#include <iostream>
#include <vector>

using namespace std;

void nextPermutation(vector<int> &nums)
{
    // 1 4 5 3 2
    int n = nums.size();
    int fId = -1;
    int sId = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            fId = i;
            break;
        }
    }

    if (fId < 0)
    {
        reverse(nums.begin(), nums.end());
    }
    else
    {

        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[fId] < nums[i])
            {
                sId = i;
                break;
            }
        }

        int temp = nums[fId];
        nums[fId] = nums[sId];
        nums[sId] = temp;

        reverse(nums.begin() + fId + 1, nums.end());
    }
}

int main()
{

    return 0;
}
