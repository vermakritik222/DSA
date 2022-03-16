// https://leetcode.com/problems/product-of-array-except-self/
// 16/16/3/22

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans;
    int product = 1;
    int index_of_zero = -1;
    int num_of_Zeros = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            index_of_zero = i;
            num_of_Zeros++;
        }
        else
        {
            product = product * nums[i];
        }
    }

    if (num_of_Zeros > 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(0);
        }
        return ans;
    }

    if (index_of_zero != -1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (index_of_zero == i)
            {
                ans.push_back(product);
            }
            else
            {
                ans.push_back(0);
            }
        }
    }
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(product / nums[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}
