#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    bool found = false;
    int n, t;
    cin >> n >> t;

    vector<int> nums(n);
    map<int, int> comp;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (comp.count(t - nums[i]))
        {
            cout << i + 1 << " " << comp[t - nums[i]] << "\n";
            found = true;
            break;
        }
        comp[nums[i]] = i + 1;
    }

    if (!found)
    {
        cout << "IMPOSSIBLE" << "\n";
    }
}