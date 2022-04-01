// https://leetcode.com/problems/valid-square/submissions/
// 28/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int len(vector<int> &p1, vector<int> &p2)
{
    int d = ((p1[0] - p2[0]) * (p1[0] - p2[0])) + ((p1[1] - p2[1]) * (p1[1] - p2[1]));
    return d;
}
bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
{
    unordered_map<int, int> mp;
    vector<int> sids = {
        len(p1, p2),
        len(p1, p3),
        len(p1, p4),
        len(p2, p3),
        len(p2, p4),
        len(p3, p4)};

    for (int i = 0; i < sids.size(); i++)
    {
        if (sids[i] == 0)
        {
            return false;
        }
        mp[sids[i]]++;
    }

    if (mp.size() != 2)
    {
        return false;
    }

    for (auto &i : mp)
    {
        return (i.second == 2 || i.second == 4);
    }

    return false;
}

int main()
{

    return 0;
}
