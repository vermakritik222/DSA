// https://leetcode.com/problems/valid-palindrome-ii/submissions/
// 22/3/22

#include <iostream>
#include <string>

using namespace std;

bool checkpalindrome(string s, int hi, int lo)
{
    while (hi > lo)
    {
        if (s[hi] != s[lo])
        {
            return false;
        }

        hi--;
        lo++;
    }
    return true;
}

bool validPalindrome(string s)
{
    int hi = s.size() - 1;
    int lo = 0;

    if (checkpalindrome(s, hi, lo))
    {
        return true;
    }

    int deleting = 0;

    while (hi > lo)
    {
        if (s[hi] != s[lo])
        {
            return checkpalindrome(s, hi - 1, lo) || checkpalindrome(s, hi, lo + 1);
        }

        hi--;
        lo++;
    }
    return true;
}

int main()
{
    return 0;
}
