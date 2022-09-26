#include <bits/stdc++.h>

using namespace std;

int ans = 0;
bool sum[15], dif[15], column[8];
string input[8];

void backtrack(int n)
{
    if (n == 8)
    {
        ans += 1;
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            if (input[n][i] == '.' && !column[i] && !sum[i + n] && !dif[i - n + 7])
            {
                column[i] = sum[i + n] = dif[i - n + 7] = true;
                backtrack(n + 1);
                column[i] = sum[i + n] = dif[i - n + 7] = false;
            }
        }
    }

}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    for (int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }

    backtrack(0);

    cout << ans << "\n";
}