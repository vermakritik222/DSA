// https://www.codechef.com/problems/HILLS
// 20/3/22

#include <bits/stdc++.h>

using namespace std;

// N= 5 U = 3 D = 2
// 2 5 2 6 3

//  N= 5 U= 2 D= 3
//  4 4 4 4 4

// N= 5 U= 2 D= 7
// 1 4 3 2 1
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
            else if (hights[curridx] = hights[i])
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

void print(int N, int U, int D, vector<int> hights)
{
    cout << N << " " << U << " " << D << '\n';
    for (int i = 0; i < N; i++)
    {
        cout << hights[i] << " ";
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
        print(N, U, D, hights)
        // cout << jump(N, U, D, hights) << "\n";
    }

    return 0;
}