// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// 2/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;
int solution1_fast(vector<int> &arr)
{
    int l = 0, h = arr.size() - 1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1])
        {
            return m;
        }
        else if (arr[m] < arr[m + 1])
            l = m + 1;
        else
            h = m - 1;
    }
    return h;
}

int solution2(vector<int> &arr)
{

    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {

        if (ans > arr[i])
        {
            return i - 1;
        }
        ans = arr[i];
    }

    return -1;
}

int main()
{

    return 0;
}
