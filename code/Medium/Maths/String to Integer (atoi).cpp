#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

int myAtoi(string s)
{
    bool neg = false;
    bool sign = false;
    bool first = false;
    long long int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }

        if (s[i] != ' ' && s[i] != '-' && s[i] != '+')
        {
            first = true;
        }
        if (s[i] == ' ' && first == true)
        {
            return 0;
        }
        if (s[i] == '-')
        {
            if (sign || first)
            {
                break;
            }
            sign = true;
            neg = true;
            continue;
        }
        else if (s[i] == '+')
        {
            if (sign || first)
            {
                break;
            }
            sign = true;
            continue;
        }

        if ((s[i] - '0' >= 0 && s[i] - '0' <= 9))
        {
            if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
            {
                ans = ans * 10 + (s[i] - '0');
            }

            if (ans > INT_MAX)
            {
                if (neg)
                {
                    return INT_MIN;
                }
                else
                {
                    return INT_MAX;
                }
            }
        }
        else
        {
            break;
        }
    }

    if (neg)
    {
        ans *= -1;
    }
    return ans;
}

int main()
{

    return 0;
}
