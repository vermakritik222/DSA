#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int search(vector<int> &nums, int target)
{
    int hi = nums.size() - 1, lo = 0;

    while (hi >= lo)
    {
        int mid = (hi + lo) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[lo] <= nums[mid])
        {
            if (target >= nums[lo] && target <= nums[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        else
        {
            if (target >= nums[mid] && target <= nums[hi])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    return 0;
}
