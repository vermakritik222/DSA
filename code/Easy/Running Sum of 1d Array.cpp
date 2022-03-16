// https://leetcode.com/problems/running-sum-of-1d-array/
// 16/3/22

#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &nums)
{

    vector<int> suff;

    suff.push_back(nums[0]);

    for (int i = 1; i < nums.size(); i++)
    {
        suff.push_back(nums[i] + suff[i - 1]);
    }

    return suff;
}

int main()
{

    return 0;
}
