#include <bits/stdc++.h>

using namespace std;
int n, a, b, maxCover, numCover, covered[1000];
vector<pair<int, int>> shift;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    cin >> n;
    shift.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        shift[i] = make_pair(a, b);
        for (int j = a; j < b; j++)
        {
            covered[j]++;
        }
    }

    for (pair<int, int> worker : shift)
    {
        for (int i = worker.first; i < worker.second; i++)
        {
            covered[i]--;
        }

        numCover = 0;

        for (int i = 0; i < 1000; i++)
        {
            if (covered[i] > 0)
            {
                numCover++;
            }
        }

        for (int i = worker.first; i < worker.second; i++)
        {
            covered[i]++;
        }
        
        maxCover = max(maxCover, numCover);
    }

    cout << maxCover << "\n";
}