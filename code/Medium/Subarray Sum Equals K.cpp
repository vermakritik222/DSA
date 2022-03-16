#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{

    unordered_map<int, int> mp;
    int curr_Sum = 0;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        curr_Sum += nums[i];

        if (curr_Sum == k)
        {
            ans++;
        }
        if (mp.find(curr_Sum - k) != mp.end())
        {
            ans = ans + mp[curr_Sum - k];
        }
        mp[curr_Sum]++;
    }

    return ans;
}

int main()
{

    return 0;
}
