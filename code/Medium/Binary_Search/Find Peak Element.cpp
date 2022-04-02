// https://leetcode.com/problems/find-peak-element/
// 2/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int findPeakElement(vector<int> &nums)
{

    int ed = nums.size() - 1, st = 0;

    while (ed >= st)
    {
        int mid = st + (ed - st) / 2;

        if ((mid == nums.size() - 1 || nums[mid] > nums[mid + 1]) && (mid == 0 || nums[mid] > nums[mid - 1]))
        {
            return mid;
        }
        else if (nums[mid] < nums[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            ed = mid;
        }
    }

    return nums[0];
}

int main()
{

    return 0;
}
