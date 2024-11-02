#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    double curr = 10e9;

    for (int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        double distance = y1 + ((y2 - y1) / (double)(x2 - x1) * (0 - x1));

        if (distance > 0 && x1 * x2 <= 0)
        {
            curr = min(curr, distance);
        }

    }

    cout << (curr == 10e9 ? -1.0 : curr) << "\n";
}