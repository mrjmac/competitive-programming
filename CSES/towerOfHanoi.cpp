#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int f, int t, int a)
{
    if (n > 0)
    {
        hanoi(n - 1, f, a, t);
        cout << f << " " << t << "\n";
        hanoi(n - 1, a, t, f);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    cout << pow(2, n) - 1 << "\n";
    hanoi(n, 1, 3, 2);
}