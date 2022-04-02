// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// 2/4/22

int countNegativesROW(vector<int> row)
{
    int lo = 0;
    int hi = row.size() - 1;

    while (lo <= hi)
    {

        if (row[lo] >= 0)
        {
            lo++;
        }

        else if (row[lo] < 0)
        {
            return (hi - lo + 1);
        }
    }

    return 0;
}

int countNegatives(vector<vector<int>> &grid)
{
    int sum = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        sum += countNegativesROW(grid[i]);
    }

    return sum;
}