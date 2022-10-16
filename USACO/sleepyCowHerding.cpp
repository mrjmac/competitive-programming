#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    vector<int> pos(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> pos[i];
    }

    sort(pos.begin(), pos.end());

    if (pos[0] == pos[2] - 2)
    {
        cout << 0 << "\n";
    }
    else if (pos[1] == pos[2] -2 || pos[0] == pos[1] - 2)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }

    cout << max(pos[2] - pos[1], pos[1] - pos[0]) - 1 << "\n";
}