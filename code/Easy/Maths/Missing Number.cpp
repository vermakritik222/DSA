// https://leetcode.com/problems/missing-number/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int missingNumber(vector<int> &nums)
{
    vector<int> flag;

    for (int i = 0; i < nums.size() + 1; i++)
    {
        flag.push_back(0);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        flag[nums[i]]++;
    }

    for (int i = 0; i < flag.size(); i++)
    {

        if (flag[i] == 0)
        {
            return i;
        }
    }

    return flag[0];
}

int main()
{

    return 0;
}
