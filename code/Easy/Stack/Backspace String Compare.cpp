// https://leetcode.com/problems/backspace-string-compare/
// 64/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

string check(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#' && ans.size() != 0)
        {
            ans.pop_back();
        }
        else if (s[i] != '#')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

bool backspaceCompare(string s, string t)
{

    return check(s) == check(t);
}

int main()
{

    return 0;
}
