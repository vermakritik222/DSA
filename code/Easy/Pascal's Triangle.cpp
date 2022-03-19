#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> generate(int numRows)
{
    int start = 1;

    vector<int> currentRow;
    vector<int> preRow = {1};

    vector<vector<int>> ans = {{1}};

    for (int i = 0; i < numRows - 1; i++)
    {

        for (int j = 0; j < preRow.size() + 1; j++)
        {

            int num1;
            int num2;

            if ((j - 1) == -1)
            {
                num1 = 0;
            }
            else
            {
                num1 = preRow[j - 1];
            }

            if (j == preRow.size())
            {
                num2 = 0;
            }
            else
            {
                num2 = preRow[j];
            }

            int temp = num1 + num2;

            currentRow.push_back(temp);
        }
        for (int k = 0; k < currentRow.size(); k++)
        {
            cout << currentRow[k] << " ";
        }
        cout << endl;

        ans.push_back(currentRow);
        preRow = currentRow;
        currentRow = {};
    }
    return ans;
}
int main()
{

    return 0;
}
