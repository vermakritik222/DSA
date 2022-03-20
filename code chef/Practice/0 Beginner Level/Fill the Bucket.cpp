// https://www.codechef.com/problems/FBC
// 20/3/22

#include <bits/stdc++.h>

using namespace std;

int extraWater(int capacity, int filled)
{
    return (capacity - filled);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int capacity;
        cin >> capacity;
        int filled;
        cin >> filled;

        cout << extraWater(capacity, filled) << "/n"
    }

    return 0;
}