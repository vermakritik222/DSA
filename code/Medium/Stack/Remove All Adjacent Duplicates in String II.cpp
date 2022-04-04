// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
// 4/4/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

string removeDuplicates(string s, int k)
{
    stack<pair<char, int>> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top().first == s[i])
        {
            st.top().second++;
        }
        else
        {
            pair<char, int> temp;
            temp.first = s[i];
            temp.second = 1;
            st.push(temp);
        }

        if (st.top().second == k)
        {
            st.pop();
        }
    }

    string str = "";

    while (!st.empty())
    {
        if (st.top().second > 1)
        {
            for (int i = 0; i < st.top().second; i++)
            {
                str.push_back(st.top().first);
            }
        }
        else
        {

            str.push_back(st.top().first);
        }

        st.pop();
    }

    reverse(str.begin(), str.end());

    return str;
}

int main()
{

    return 0;
}
