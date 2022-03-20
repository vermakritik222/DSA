// https://www.codechef.com/problems/EVENPSUM
// 20/3/22

#include <bits/stdc++.h>

using namespace std;

void EvenPairSum(long long int a, long long int b)
{
    long long int evenA = 0, oddA = 0, evenB = 0, oddB = 0;
    if (a % 2 == 0)
    {
        evenA = (a / 2);
        oddA = (a / 2);
    }
    else
    {
        evenA = ((a - 1) / 2);
        oddA = ((a + 1) / 2);
    }
    if (b % 2 == 0)
    {
        evenB = (b / 2);
        oddB = (b / 2);
    }
    else
    {
        evenB = ((b - 1) / 2);
        oddB = ((b + 1) / 2);
    }

    cout << ((evenA * evenB) + (oddA * oddB)) << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long int a;
        cin >> a;
        long long int b;
        cin >> b;

        EvenPairSum(a, b);
    }

    return 0;
}