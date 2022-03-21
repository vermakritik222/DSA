// https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
//  19/3/22

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i] * nums[i]);
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{

    return 0;
}
