// https://leetcode.com/problems/longest-palindromic-substring/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

string longestPalindrome(string s)
{

    if (s.length() <= 1)
        return s;
    int n = s.size();
    int st = 0;
    int end = n - 1;
    int max_len = 1;

    // Odd length
    for (int i = 0; i < n - 1; ++i)
    {
        int l = i, r = i;
        while (l >= 0 && r < n)
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }
        int len = r - l - 1;
        if (len > max_len)
        {
            max_len = len;
            st = l + 1;
            end = r - 1;
        }
    }

    // Even length
    for (int i = 0; i < n - 1; ++i)
    {
        int l = i, r = i + 1;
        while (l >= 0 && r < n)
        {
            if (s[l] == s[r])
            {
                l--;
                r++;
            }
            else
                break;
        }
        int len = r - l - 1;
        if (len > max_len)
        {
            max_len = len;
            st = l + 1;
            end = r - 1;
        }
    }

    return s.substr(st, max_len);
}

int main()
{

    return 0;
}
