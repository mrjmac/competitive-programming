#include <bits/stdc++.h>

using namespace std;

int n;
long long x[100000];
long long y[100000];
long long inf = 1e9;

struct analysis
{
    long long area;
    vector<vector<int>> borders;
};

analysis analyze(vector<int> skip)
{
    long long minX = inf, minY = inf, maxX = -inf, maxY = -inf;
    for (int i = 0; i < n; i++)
    {
        bool bad = false;
        for (int j = 0; j < (int) skip.size(); j++)
        {
            if (skip[j] == i)
            {
                bad = true;
            }
        }

        if (bad)
        {
            continue;
        }

        minX = min(minX, x[i]);
        maxX = max(maxX, x[i]);
        minY = min(minY, y[i]);
        maxY = max(maxY, y[i]);

    }

    analysis area;
    area.area = (maxX - minX) * (maxY - minY);

    vector<int> up, down, left, right;

    for (int i = 0; i < n; i++)
    {
        bool bad = false;
        for (int j = 0; j < (int) skip.size(); j++)
        {
            if (skip[j] == i)
            {
                bad = true;
            }
        }

        if (bad)
        {
            continue;
        }

        if (x[i] == minX)
        {
            left.push_back(i);
        }
        if (x[i] == maxX)
        {
            right.push_back(i);
        }
        if (y[i] == minY)
        {
            up.push_back(i);
        }
        if (y[i] == maxY)
        {
            down.push_back(i);
        }
    }

    if (up.size() <= 3)
    {
        area.borders.push_back(up);
    }
    if (down.size() <= 3)
    {
        area.borders.push_back(down);
    }
    if (left.size() <= 3)
    {
        area.borders.push_back(left);
    }
    if (right.size() <= 3)
    {
        area.borders.push_back(right);
    }

    return area;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("reduce.in", "r", stdin);
    freopen("reduce.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    analysis a = analyze(vector<int>());
    long long ans = a.area;

    for (vector<int> point : a.borders)
    {
        analysis small = analyze(point);
        ans = min(ans, small.area);

        for (vector<int> point2 : small.borders)
        {
            if (point2.size() + point.size() <= 3)
            {
                for (int p : point)
                {
                    point2.push_back(p);
                }

                analysis a3 = analyze(point2);
                ans = min(ans, a3.area);

                for (vector<int> point3 : a3.borders)
                {
                    if (point2.size() + point3.size() <= 3)
                    {
                        for (int p : point2)
                        {
                            point3.push_back(p);
                        }

                        analysis a4 = analyze(point3);
                        ans = min(ans, a4.area);
                    }
                }
            }
        }
    }

    cout << ans << "\n";

}