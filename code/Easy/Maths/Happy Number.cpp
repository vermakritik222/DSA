// https://leetcode.com/problems/happy-number/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int sum_sqr(int n)
{
    long long int sum = 0;
    int a = n;

    while (a != 0)
    {
        int temp = a % 10;
        sum += (temp * temp);
        a /= 10;
    }

    return sum;
}

bool isHappy(int n)
{

    unordered_map<int, int> mp;
    int res = sum_sqr(n);

    while (1)
    {
        if (mp.find(res) != mp.end())
        {
            return false;
        }

        if (res == 1)
        {
            return true;
        }
        mp[res]++;
        res = sum_sqr(res);
    }
    return false;
}

int main()
{

    return 0;
}
