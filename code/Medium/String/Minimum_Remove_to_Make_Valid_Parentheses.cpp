// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>
#include <stack>

string minRemoveToMakeValid(string s)
{
    stack<int> st;
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        if (s[i] == ')' && st.size() != 0)
        {
            st.pop();
        }
        else if (s[i] == ')' && st.size() == 0)
        {
            s[i] = '*';
        }
    }
    if (st.size() != 0)
    {
        while (st.size() != 0)
        {
            int temp = st.top();
            s[temp] = '*';
            st.pop();
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '*')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

using namespace std;

int main()
{

    return 0;
}
