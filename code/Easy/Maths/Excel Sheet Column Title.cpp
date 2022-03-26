// https://leetcode.com/problems/excel-sheet-column-title/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

string convertToTitle(int columnNumber)
{
    string ans = "";
    int n = columnNumber;
    n--;
    while (n >= 0)
    {
        int temp = n % 26;

        ans += ('A' + temp);
        n /= 26;
        n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    return 0;
}
