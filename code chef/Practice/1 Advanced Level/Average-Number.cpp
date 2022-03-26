// https://www.codechef.com/problems/AVG

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define pop pop_back
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
int sums(vector<int> nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}
int avg(int n, int k, int v, vector<int> nums)
{
    int sum = sums(nums);
    int val = (v * (k + n) - sum) / k;

    if (val >= 0 && (val * k + sum) / (n + k) == v)
    {
        return val;
    }
    else
    {
        return -1;
    }
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
        int k;
        int v;
        cin >> n;
        cin >> k;
        cin >> v;

        vector<int> nums;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            nums.pb(a);
        }
        cout << avg(n, k, v, nums) << '\n';
    }

    return 0;
}
