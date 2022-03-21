// https://leetcode.com/problems/spiral-matrix/
// 17/3/22

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row_strt = 0, row_end = matrix.size() - 1;
    int col_strt = 0, col_end = matrix[0].size() - 1;

    while (row_strt <= row_end && col_strt <= col_end)
    {

        for (int col = col_strt; col <= col_end; col++)
        {
            ans.push_back(matrix[row_strt][col]);
        }
        row_strt++;

        for (int row = row_strt; row <= row_end; row++)
        {
            ans.push_back(matrix[row][col_end]);
        }
        col_end--;

        if (row_end >= row_strt)
        {
            for (int col = col_end; col >= col_strt; col--)
            {
                ans.push_back(matrix[row_end][col]);
            }
        }
        row_end--;

        if (col_end >= col_strt)
        {
            for (int row = row_end; row >= row_strt; row--)
            {
                ans.push_back(matrix[row][col_strt]);
            }
        }
        col_strt++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> ass
    {
        {
        }
    }
    spiralOrder() return 0;
}
