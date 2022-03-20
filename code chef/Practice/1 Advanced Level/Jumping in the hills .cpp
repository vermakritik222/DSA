// https://www.codechef.com/problems/HILLS
// 20/3/22

#include <bits/stdc++.h>

using namespace std;

int jump(int N, int U, int D, vector<int> hights)
{
    int curridx = 0;
    for (int i = 1; i < N; i++)
    {
        if ((hights[i] - hights[curridx]) > 0)
        {
            if ((hights[i] - hights[curridx]) <= U)
            {
                curridx++;
            }
            else if (hights[curridx] == hights[i])
            {
                curridx++;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (abs((hights[i] - hights[curridx])) <= D)
            {
                curridx++;
            }
            else
            {
                curridx++;
                break;
            }
        }
    }
    return curridx + 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int N;
        int U;
        int D;
        cin >> N;
        cin >> U;
        cin >> D;
        vector<int> hights;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            hights.push_back(x);
        }

        cout << jump(N, U, D, hights) << "\n";
    }

    return 0;
}