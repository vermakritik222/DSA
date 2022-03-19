// https://leetcode.com/problems/jump-game-ii/
// 19/3/22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int jump(vector<int> &nums)
{
    int from = 0;
    int count = 0;
    int track = 0;

    if (nums.size() == 1)
    {
        return 0;
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {

        track = max(track, nums[i] + i);

        if (i == from)
        {
            count++;

            if (track >= nums.size() - 1)
            {
                return count;
            }

            from = track;
        }
    }

    return count;
}

int main()
{

    return 0;
}
