// https://leetcode.com/problems/longest-repeating-character-replacement/
// 3/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int fre(unordered_map<char, int> mp)
{
    int maxf = 0;

    for (auto i : mp)
    {
        maxf = max(i.second, maxf);
    }

    return maxf;
}

int characterReplacement(string s, int k)
{

    unordered_map<char, int> mp;
    int maxf = 0, ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        maxf = fre(mp);

        if (maxf + k > ans)
        {
            ans++;
        }
        else
        {
            mp[s[i - ans]]--;
        }
    }
    return ans;
}

int main()
{

    return 0;
}
