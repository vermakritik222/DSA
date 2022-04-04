// https://leetcode.com/problems/merge-sorted-array/
// 14/3/22

#include <iostream>
#include <vector>

using namespace std;

void merge__Optimized(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int last = m + n - 1;

    while (n > 0 && m > 0)
    {
        if (nums1[m - 1] > nums2[n - 1])
        {
            nums1[last] = nums1[m - 1];
            m--;
        }
        else
        {
            nums1[last] = nums2[n - 1];
            n--;
        }
        last--;
    }

    while (n > 0)
    {
        nums1[last] = nums2[n - 1];
        n--;
        last--;
    }
}

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
    if (n == 0)
    {
        return nums1;
    }
    if (m == 0)
    {
        return nums2;
    }

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {

        if (nums1[i] >= nums2[j])
        {
            ans.push_back(nums2[j]);
            j++;
        }

        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
    }

    while (i < m)
    {
        ans.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(nums2[j]);
        j++;
    }

    return ans;
}

int main()
{
    vector<int> nums1{};
    int m = 0;
    vector<int> nums2{1};
    int n = 1;
    vector<int> ans = merge(nums1, m, nums2, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
