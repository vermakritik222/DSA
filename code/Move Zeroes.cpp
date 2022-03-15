// https://leetcode.com/problems/move-zeroes/submissions/
// 14/3/22

#include <iostream>
#include <vector>

using namespace std;

// oder O(N)
void moveZeroes(vector<int> &nums)
{
    vector<int> ans;
    int counter = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            counter++;
        }
        else
        {
            ans.push_back(nums[i]);
        }
    }

    while (counter > 0)
    {
        ans.push_back(0);
        counter--;
    }
    nums = ans;
}

// oder O(1)
void moveZeroes_oder_O1(vector<int> &nums)
{
    int pos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[pos++] = nums[i];
        }
    }

    for (int i = pos; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

int main()
{

    vector<int> nums{0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
