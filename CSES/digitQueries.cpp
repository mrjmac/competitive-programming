#include <bits/stdc++.h>

using namespace std;

long long pow10(int ex)
{
    long long ans = 1;
    for (int i = 0; i < ex; i++)
    {
        ans *= 10;
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long k;
        cin >> k;
        
        int j = 1;
        while (k > j * 9 * pow10(j - 1))
        {
            k -= j * 9 * pow10(j - 1);
            j++;
        }

        long ans = (k - 1) / j + pow10(j - 1);
        long idx = (int) ((k - 1) % j);

        cout << to_string(ans)[idx] << "\n";
    }
}