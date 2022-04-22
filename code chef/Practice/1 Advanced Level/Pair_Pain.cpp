#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define popb pop_back
#define max3(a, b, c) max(max((a), (b)), (c))
#define max4(a, b, c, d) max(max((a), (b)), max((c), (d)))
#define min3(a, b, c) min(min((a), (b)), (c))
#define min4(a, b, c, d) min(min((a), (b)), min((c), (d)))

void reader()
{

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

int pair_pain(vector<int> arr, int N)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] >= arr[i] * arr[j])
            {
                count++;
            }
        }
    }
    return count;
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
        int N;
        cin >> N;
        vector<int> arr;
        for (int i = 0; i < N; i++)
        {
            int a;
            cin >> a;
            arr.pb(a);
        }

        cout << pair_pain(arr, N) << "\n";
    }

    return 0;
}