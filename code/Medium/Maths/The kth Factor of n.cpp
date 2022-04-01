// https://leetcode.com/problems/the-kth-factor-of-n/
// 28/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int kthFactor(int n, int k)
{
    vector<int> factor;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factor.push_back(i);
        }
        if (factor.size() >= k)
        {
            return factor[k - 1];
        }
    }

    return -1;
}

int main()
{

    return 0;
}
