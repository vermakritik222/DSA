// https://leetcode.com/problems/maximum-number-of-visible-points/

#include <iostream>
#include <vector>

using namespace std;

double findangle(vector<int> &point, vector<int> &location)
{
    int height = point[1] - location[1];
    int width = point[0] - location[0];
    double alpha = atan2(height, width) * (180 / M_PI);
    return (alpha >= 0) ? alpha : alpha + 360;
}

int visiblePoints(vector<vector<int>> &points, int angle, vector<int> &location)
{
    int ans = 0;
    int sameLocaton = 0;
    vector<vector<int>> diffLocations;

    for (int i = 0; i < points.size(); i++)
    {
        if (points[i] == location)
        {
            sameLocaton++;
        }
        else
        {
            diffLocations.push_back(points[i]);
        }
    }

    points = diffLocations;

    vector<double> angles;

    for (int i = 0; i < points.size(); i++)
    {
        int temp = findangle(points[i], location);
        angles.push_back(temp);
        angles.push_back(temp + 360);
    }

    sort(angles.begin(), angles.end());

    int i = 0, j = 0;

    while (j < angles.size())
    {

        while ((j < angles.size()) && ((angles[j] - angles[i]) <= angle))
        {
            j++;
        }
        ans = max(ans, (j - i));

        while ((j < angles.size()) && (i < j) && ((angles[j] - angles[i]) > angle))
        {
            i++;
        }
    }

    return ans + sameLocaton;
}

int main()
{

    return 0;
}
