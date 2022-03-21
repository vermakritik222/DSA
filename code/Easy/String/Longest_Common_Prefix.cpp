#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;
string longestCommonPrefix(vector<string> &strs)
{

    if (strs.size() == 1)
        return strs[0];

    string pre = strs[0];

    for (int i = 0; i < strs.size(); i++)
    {
        while (strs[i].find(pre) != 0)
        {
            pre = pre.substr(0, pre.size() - 1);
        }
    }
    return pre;
}
int main()
{
    return 0;
}
