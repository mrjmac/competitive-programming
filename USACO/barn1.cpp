/*
ID: john38
TASK: barn1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);

    int m, s, c;
    cin >> m >> s >> c;

    int stalls[s] = {0};

    int start = s;
    int end = 0;

    for (int i = 0; i < c; i++)
    {
        int stall;
        cin >> stall;

        stalls[stall - 1] = 1;

        start = min(start, stall);
        end = max(stall, end);
    }

    int currRun = 0;
    vector<int> runs;

    for (int i = start; i < end; i++)
    {
        if (!stalls[i])
        {
            currRun++;
        }
        else if (currRun > 0)
        {
            runs.push_back(currRun);
            currRun = 0;
        }
    }

    sort(runs.begin(), runs.end(), greater<>());

    int ans = (start - 1) + (s - end);

    for (int i = 0; i < (m - 1) && i < (int) runs.size(); i++)
    {
        ans += runs[i];
    }

    cout << (s - ans) << "\n";
}