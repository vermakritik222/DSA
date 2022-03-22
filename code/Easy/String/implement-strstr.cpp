// https://leetcode.com/problems/implement-strstr/
// 22/3/22

#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    if (needle == "")
    {
        return 0;
    }
    else if (haystack.find(needle) > haystack.size())
    {
        return -1;
    }
    return haystack.find(needle);
}

int main()
{

    return 0;
}
