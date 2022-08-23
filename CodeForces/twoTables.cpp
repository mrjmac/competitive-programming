#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tw, th, x1, y1, x2, y2, w2, h2;
        cin >> tw >> th >> x1 >> y1 >> x2 >> y2 >> w2 >> h2;

        int w1 = x2 - x1;
        int h1 = y2 - y1;

        int leftP = w2;
        int rightP = tw - w2;
        int topP = th - h2;
        int bottomP = h2;

        int left = max(leftP - x1, 0);
        int right = max(x2 - rightP, 0);
        int top = max(y2 - topP, 0);
        int bottom = max(bottomP - y1, 0);

        if (w1 + w2 > tw)
        {
            left = INT32_MAX;
            right = INT32_MAX;
        }

        if (h1 + h2 > th)
        {
            top = INT32_MAX;
            bottom = INT32_MAX;
        }

        int ans = min(min(left, right), min(top, bottom));

        if (ans == INT32_MAX)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
}