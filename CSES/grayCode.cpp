#include <bits/stdc++.h>

using namespace std;

void add(vector<string> a, int n, int curr)
{
    if (curr == n)
    {
        for (int i = 0; i < (int)a.size(); i++)
        {
            cout << a[i] << "\n";
        }
    }
    else
    {
        vector<string> next(a.size() * 2);
        for (int i = 0; i < (int)a.size(); i++)
        {
            next[i] = a[i] + "0";
            next[(next.size() - i - 1)] = a[i] + "1";
        }
        add(next, n, curr + 1);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    add(vector<string>{"0", "1"}, n, 1);
}