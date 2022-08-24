#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> shells{0, 1, 2};
    vector<int> correct(3);

    for (int i = 0; i < n; i++)
    {
        int a, b, g;
        cin >> a >> b >> g;

        a--, b--, g--;

        swap(shells[a], shells[b]);
        correct[shells[g]]++;
    }

    cout << max(max(correct[0], correct[1]), correct[2]) << "\n";
}