// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;
int minMoves(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    long long int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans += abs(nums[0] - nums[i]);
    }

    return ans;
}

int main()
{

    return 0;
}
