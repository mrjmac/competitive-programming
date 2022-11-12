#include <bits/stdc++.h>

using namespace std;

void solve()
{

    long long l, n, sum = 0, count = 0;

    cin >> l >> n;
    while (n--){
        long long di;
        char c;
        cin >> di >> c;

        if (c == 'C')
        {
            sum += di;
            if (sum >= l)
            {
                count += sum / l;
                sum %= l;
            }
        }
        else
        {
            sum -= di;
            if (sum <= -l)
            {
                count += abs(sum) / l;
                sum = -1 * (abs(sum) % l);
            }
        }

    }

    cout << count;
}


int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long t;
    long long i = 1;

    cin >> t;

    while (t--)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
        i++;
    }
}