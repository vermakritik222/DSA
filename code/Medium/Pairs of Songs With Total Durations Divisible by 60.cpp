// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
// 19/3/22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int numPairsDivisibleBy60(vector<int> &time)
{

    int count = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < time.size(); i++)
    {
        int neededsec = 0;
        if (time[i] % 60 != 0)
        {
            neededsec = 60 - (time[i] % 60);
        }
        count += mp[neededsec];
        mp[time[i] % 60]++;
    }
    return count;
}

int main()
{

    return 0;
}
