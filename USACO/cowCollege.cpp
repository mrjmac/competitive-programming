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

    int idx = 0;
    int prevMin = tuition[0];
    int gapSize = 0;

    for (long long i : tuition)
    {
        if (i > prevMin)
        {
            idx += gapSize;
            prevMin = i;
            gapSize = 1;
        }
        else
        {
            gapSize += 1;
        }
        long long curr = n - idx;

        if (curr * i > ans)
        {
            ans = curr * i;
            cowAns = i;
        }

    }

    cout << ans << " " << cowAns << "\n";

}