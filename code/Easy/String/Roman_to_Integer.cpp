// https://leetcode.com/problems/roman-to-integer/
//  22/3/22

#include <iostream>
#include <string>

using namespace std;

int convert(char s)
{
    switch (s)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
    return 0;
}

int romanToInt(string s)
{
    int sum = 0;

    for (int i = s.size() - 1; i > 0; i--)
    {
        if (convert(s[i]) <= convert(s[i - 1]))
        {
            sum += convert(s[i]);
        }
        else
        {
            sum += convert(s[i]) - convert(s[i - 1]);
            i--;
        }
    }

    if (convert(s[1]) <= convert(s[0]))
    {
        sum += convert(s[0]);
    }

    return sum;
}

int main()
{

    return 0;
}
