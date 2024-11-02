#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> hut(n);
    vector<int> ic(m);

    for (int i = 0; i < n; i++)
    {
        cin >> hut[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> ic[i];
    }

    sort(ic.begin(), ic.end());

    vector<pair<long long, long long>> vp;

    for (int i = 0; i < n; i++)
    {
        int idx = lower_bound(ic.begin(), ic.end(), i * 100LL) - ic.begin();
        long long low = abs(ic[idx] - i * 100LL);

        if (idx > 0)
        {
            low = min(low, abs(ic[idx - 1] - i * 100LL));
        }

        vp.push_back(make_pair(i * 100LL - low, hut[i]));
        vp.push_back(make_pair(i * 100LL + low, -hut[i]));
    }

    sort(vp.begin(), vp.end());

    long long temp = 0, ans = 0;
    for (int i = 0; i < (int) vp.size(); i++)
    {
        temp += vp[i].second;
        ans = max(ans, temp);
    }

    cout << ans << "\n";
}