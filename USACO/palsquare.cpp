/*
ID: john38
TASK: palsquare
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

string numbers = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string baseConvert(int base10, int newBase)
{
    string ans = "";

    while (base10 > 0)
    {
        int r = base10 % newBase;
        ans += numbers[r];
        base10 /= newBase;
    }

    string reverse(ans.rbegin(), ans.rend());
    return reverse;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("palsquare.in", "r", stdin);
    freopen("palsquare.out", "w", stdout);

    int n;
    cin >> n;

    for (int i = 1; i <= 300; i++)
    {
        string sq = baseConvert(pow(i, 2), n);
        string curr = baseConvert(i, n);
        string reverse(sq.rbegin(), sq.rend());

        if (reverse == sq)
        {
            cout << curr << " " << sq << "\n";
        }
    }
}