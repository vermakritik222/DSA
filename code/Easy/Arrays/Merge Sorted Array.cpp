// https://leetcode.com/problems/merge-sorted-array/
// 14/3/22

#include <iostream>
#include <vector>

using namespace std;

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
