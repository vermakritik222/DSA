// https://www.codechef.com/problems/SC31
// 20/3/22

#include <bits/stdc++.h>

using namespace std;

void weapon(int a, vector<string> &players)
{
    string winning = players[0];
    for (int i = 1; i < players.size(); i++)
    {
        string temp = "0000000000";
        for (int j = 0; j < 10; j++)
        {
            if (players[i][j] == '0' && winning[j] == '0')
            {
                continue;
            }
            else if (players[i][j] == '1' && winning[j] == '1')
            {
                continue;
            }
            else
            {
                temp[j] = '1';
            }
        }
        winning = temp;
    }
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (winning[i] == '1')
        {
            count++;
        }
    }
    cout << count << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        vector<string> players;

        for (int i = 0; i < a; i++)
        {
            string x;
            cin >> x;
            players.push_back(x);
        }
        weapon(a, players);
    }

    return 0;
}