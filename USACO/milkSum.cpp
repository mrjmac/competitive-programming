#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, q;
    cin >> n;

    vector<long long> a(n + 1), other(n + 1), prefix(n + 1);

    a[0] = 0;
    other[0] = 0;
    prefix[0] = 0;

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        other[i] = a[i];
    }

    sort(other.begin(), other.end());

    for (long long i = 1; i <= n; i++)
    {
        prefix[i] += prefix[i - 1] + other[i];
    }

    long long ans = 0;

    for (long long i = 1; i <= n; i++)
    {
        ans += (i * other[i]);
    }

    cin >> q;

    for (long long k = 0; k < q; k++)
    {
        long long i, j;
        cin >> i >> j;

        long long old = a[i];
        long long oldPos = upper_bound(other.begin() + 1, other.end(), old) - other.begin() - 1;
        long long newPos = upper_bound(other.begin() + 1, other.end(), j) - other.begin();

        if (old <= j)
        {
            newPos -= 1;
        }

        long long newAns = ans - (oldPos * old) + (newPos * j);
        if (newPos > oldPos)
        {
            newAns -= (prefix[newPos] - prefix[oldPos]);
        }
        else
        {
            newAns += ((oldPos > 0 ? prefix[oldPos - 1] : 0) - (newPos > 0 ? prefix[newPos- 1] : 0));
        }
        
        cout << newAns << "\n";
    }
   

}