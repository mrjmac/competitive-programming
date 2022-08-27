#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;
    
    long long answer = 0;
    long long distance = 1;
    long long dir = 1;
    bool found = false;

    while (!found)
    {
        if ((dir == 1 && x <= y && y <= x + distance) || (dir == -1 && x >= y && y >= x - distance))
        {
            answer += abs(y - x);
            cout << answer << "\n";
            found = true;
        }
        else
        {
            answer += distance * 2;
            distance *= 2;
            dir *= -1;
        }
    }
}