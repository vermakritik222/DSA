// https://leetcode.com/problems/Maximum-Area-of-a-Piece-of-Cake-After-Horizontal-and-Vertical-Cuts/
// 20/3/22

#include <iostream>
#include <vector>

using namespace std;

// O(NlogN)
int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
{
    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());

    int hmax = max(horizontalCuts[0] - 0, h - horizontalCuts[horizontalCuts.size() - 1]);
    int vmax = max(verticalCuts[0] - 0, w - verticalCuts[verticalCuts.size() - 1]);

    for (int i = 1; i < horizontalCuts.size(); i++)
    {
        hmax = max(hmax, horizontalCuts[i] - horizontalCuts[i - 1]);
    }

    for (int i = 1; i < verticalCuts.size(); i++)
    {
        vmax = max(vmax, verticalCuts[i] - verticalCuts[i - 1]);
    }

    return ((long long)hmax * vmax) % 1000000007;
}

int main()
{

    return 0;
}
