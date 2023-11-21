#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin >> n;

    vector<long long> tuition(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> tuition[i];
    }

    sort(tuition.begin(), tuition.end());

    long long ans = 0;
    long long cowAns = 0;

    for (int i = 0; i < n; i++)
    {
        long long curr = (long long) tuition[i] * (n - i);

        if (curr > ans)
        {
            ans = curr;
            cowAns = tuition[i];
        }
    }

    cout << ans << " " << cowAns << "\n";

}