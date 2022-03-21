// https://leetcode.com/problems/rotate-image/
// 19/3/22
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int n = matrix.size() - 1;
    int col = 0;

    while (col != matrix[0].size())
    {
        temp.push_back(matrix[n][col]);
        n--;

        if (n == -1)
        {
            ans.push_back(temp);
            temp.clear();
            n = matrix.size() - 1;
            col++;
        }
    }

    matrix = ans;
}

int main()
{

    return 0;
}
