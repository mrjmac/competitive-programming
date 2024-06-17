/*
ID: john38
TASK: milk2
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);

    int n;
    cin >> n;
    
    vector<pair<int, int>> cows(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        cows[i] = make_pair(a, b);
    }

    sort(cows.begin(), cows.end());

    int lCont = cows[0].second - cows[0].first, lIdle = 0;

    int currStart = cows[0].first;
    int currEnd = cows[0].second;

    for (int i = 1; i < n; i++)
    {
        int curr = cows[i].first;

        if (curr <= currEnd)
        {
            currEnd = max(currEnd, cows[i].second);
            lCont = max(lCont, currEnd - currStart);
        }
        else
        {
            currStart = curr;
            lIdle = max(lIdle, curr - currEnd);
            currEnd = cows[i].second;
        }
    }

    cout << lCont << " " << lIdle << "\n";
}