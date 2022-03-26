// https://leetcode.com/problems/decode-ways/
// 26/3/22

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

// int numDecodings(string s)
// {
//     vector<int> dp;
//     dp.push_back(1);

//     if (s[0] == '0')
//     {
//         return 0;
//     }

//     for (int i = 1; i < s.size(); i++)
//     {
//         if (s[i - 1] == '0' && s[i] == '0')
//         {
//             dp.push_back(0);
//         }
//         else if (s[i - 1] == '0' && s[i] != '0')
//         {
//             dp.push_back(dp[i - 1]);
//         }
//         else if (s[i - 1] != '0' && s[i] == '0')
//         {
//             if (s[i - 1] == '1' || s[i - 1] == '2')
//             {
//                 if (i >= 2)
//                 {
//                     dp.push_back(dp[i - 2]);
//                 }
//                 else
//                 {
//                     dp.push_back(1);
//                 }
//             }
//             else
//             {
//                 dp.push_back(0);
//             }
//         }
//         else
//         {
//             if (stoi(s.substr(i - 1, i + 1)) <= 26)
//             {
//                 if (i >= 2)
//                 {
//                     dp.push_back(dp[i - 1] + dp[i - 2]);
//                 }
//                 else
//                 {
//                     dp.push_back(dp[i - 1] + 1);
//                 }
//             }
//             else
//             {
//                 dp.push_back(dp[i - 1]);
//             }
//         }
//     }
//     return dp[dp.size() - 1];
// }
int main()
{

    return 0;
}
