#include <bits/stdc++.h>

using namespace std;

void ada(int r, int c)
{
    int temp = r * c;
    if (temp % 2 == 0)
    {
        cout << "y"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int r;

        cin >> r;
        cin >> c;
        ada(r, c)
    }

    return 0;
}