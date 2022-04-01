#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;
bool isAlienSorted(vector<string> &words, string order)
{
    unordered_map<char, int> mp;
    bool ans = true;
    for (int i = 0; i < order.size(); i++)
    {
        mp[order[i]] = i + 1;
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
        string f = words[i];
        string s = words[i + 1];

        int flag = 0;
        int n = min(s.size(), f.size());

        for (int k = 0; k < n; k++)
        {
            if (mp[f[k]] < mp[s[k]])
            {
                flag = 1;
                break;
            }
            if (mp[f[k]] > mp[s[k]])
            {
                return false;
            }
        }

        if (flag == 0 && f.size() > s.size())
        {
            return false;
        }
    }

    return true;
}

int main()
{

    return 0;
}
