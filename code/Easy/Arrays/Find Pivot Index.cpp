// https://leetcode.com/problems/find-pivot-index/
// 16/3/22

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{

    vector<int> ri;
    vector<int> lf;

    ri.push_back(nums[0]);
    lf.push_back(nums[nums.size() - 1]);

    for (int i = 1; i < nums.size(); i++)
    {
        ri.push_back(nums[i] + ri[i - 1]);
    }
    int i = 0;
    int j = nums.size() - 2;

    while (j >= 0)
    {
        lf.push_back(lf[i] + nums[j]);
        j--;
        i++;
    }
    reverse(lf.begin(), lf.end());
    for (int i = 0; i < lf.size(); i++)
    {

        if (ri[i] == lf[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    return 0;
}
