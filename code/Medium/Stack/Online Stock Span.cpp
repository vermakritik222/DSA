// https://leetcode.com/problems/online-stock-span/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <string>

using namespace std;

class StockSpanner
{
public:
    int index = 0;
    stack<pair<int, int>> st;

    StockSpanner()
    {
    }

    int next(int price)
    {
        if (st.empty())
        {
            pair<int, int> pa;
            pa.first = price;
            pa.second = index;
            st.push(pa);
            index++;

            return pa.second + 1;
        }

        if (st.top().first > price)
        {
            int i = st.top().second;

            pair<int, int> pa;
            pa.first = price;
            pa.second = index;
            st.push(pa);
            index++;
            return (pa.second - i);
        }
        else
        {
            while (!st.empty() && st.top().first <= price)
            {
                st.pop();
            }

            if (st.empty())
            {
                pair<int, int> pa;
                pa.first = price;
                pa.second = index;
                st.push(pa);
                index++;

                return pa.second + 1;
            }
            int i = st.top().second;

            pair<int, int> pa;
            pa.first = price;
            pa.second = index;
            st.push(pa);
            index++;
            return (pa.second - i);
        }
        return 0;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

int main()
{

    return 0;
}
