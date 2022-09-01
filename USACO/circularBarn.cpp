#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n, totalcows = 0;
    cin >> n;
    vector<int> rooms(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rooms[i];
        totalcows += rooms[i];
    }

    int mindis = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        int currdis = 0;
        int cows = totalcows;
        for (int j = 0; j < n; j++)
        {
            cows -= rooms[(i + j) % n];
            currdis += cows;
        }
        mindis = min(mindis, currdis);
    }

    cout << mindis << "\n";
}