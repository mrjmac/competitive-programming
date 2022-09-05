#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, last, curr = 0;
    cin >> n >> last;

    long moves = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        if (curr < last)
        {
            moves += last - curr;
            curr = last;
        }
        last = curr;
    }
    cout << moves << "\n";
}