// https://codeforces.com/contest/1657/problem/
// 25/3/22

#include <bits/stdc++.h>

using namespace std;

void reader()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

long long int sol(int n, int B, int x, int y)
{
    long long int sum = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = current + x;
        if (temp > B)
        {
            temp = current - y;
        }
        sum += temp;
        current = temp;
    }
    return sum;
}

int main()
{
    reader();
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int B;
        int x;
        int y;
        cin >> n;
        cin >> B;
        cin >> x;
        cin >> y;
        cout << sol(n, B, x, y) << '\n';
    }

    return 0;
}