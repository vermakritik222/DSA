// https://leetcode.com/problems/container-with-most-water/
// 17/3/22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxArea(vector<int> &height)
{

    int st = 0;
    int ed = height.size() - 1;

    int maxarea = INT_MIN;

    while (ed > st)
    {

        int area = min(height[st], height[ed]) * (ed - st);
        maxarea = max(maxarea, area);

        if (height[st] > height[ed])
        {
            ed--;
        }
        else
        {
            st++;
        }
    }

    return maxarea;
}

int main()
{

    return 0;
}
