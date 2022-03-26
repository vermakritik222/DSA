// https://leetcode.com/problems/palindrome-number/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;
int reverse(int x)
{

    if (x <= INT_MIN)
    {
        return 0;
    }
    int a = x;
    if (x < 0)
    {
        a = -1 * x;
    }

    long long int newNum = 0;

    while (a != 0)
    {

        int temp = a % 10;
        newNum = newNum * 10 + temp;

        a /= 10;
    }
    if (newNum > INT_MAX)
    {
        return 0;
    }

    if (x < 0)
    {
        newNum = -1 * newNum;
    }
    return newNum;
}

bool isPalindrome(int x)
{
    int newnum = reverse(x);
    if (x < 0)
    {
        return false;
    }

    if (x == newnum)
    {
        return true;
    }
    return false;
}

int main()
{

    return 0;
}
