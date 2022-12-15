#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    int n;
    cin >> n;

    vector<string> cowNames {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
    map<string, int> cows;

    for (int i = 0; i < (int) cowNames.size(); i++)
    {
        cows[cowNames[i]] = i;
    }

    vector<vector<int>> adj(cowNames.size());

    for (int i = 0; i < n; i++)
    {
        string cowa, cowb, trash;
        
        cin >> cowa >> trash >> trash >> trash >> trash >> cowb;

        int cow1 = cows[cowa];
        int cow2 = cows[cowb];

        adj[cow1].push_back(cow2);
        adj[cow2].push_back(cow1);
    }

    vector<int> ans;
    vector<bool> solution(cowNames.size());

    for (int i = 0; i < (int) cowNames.size(); i++)
    {
        if (!solution[i] && adj[i].size() <= 1)
        {
            solution[i] = true;
            ans.push_back(i);

            if (adj[i].size() == 1)
            {
                int start = i;
                int next = adj[i][0];
                while (adj[next].size() == 2)
                {
                    solution[next] = true;
                    ans.push_back(next);

                    int one = adj[next][0];
                    int two = adj[next][1];

                    int tNext = one == start ? two : one;
                    start = next;
                    next = tNext;
                }

                solution[next] = true;
                ans.push_back(next);
            }
        }
    }

    for (int i : ans)
    {
        cout << cowNames[i] << "\n";
    }
}