#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if (x4 >= x2 && x3 <= x1 && y4 >= y2 && y3 <= y1)
    {
        cout << 0;
    } 
    else if (x3 < x2 && x4 >= x2 && y4 >= y2 && y3 <= x1) 
    { 
        cout << (x3 - x1) * (y2 - y1);
    } 
    else if (x3 <= x1 && y3 <= y1 && y4 > y1 && x4 >= x2) 
    {
        cout << (x2 - x1) * (y2 - y4);
    } 
    else if (y3 < y2 && x3 <= x1 && y4 >= y2 && x4 >= x2) 
    {
        cout << (x2 - x1) * (y3 - y1);
    } 
    else if (x4 > x1 && x3 <= x1 && y4 >= y2 && y3 <= y1) 
    {
        cout << (x2 - x4) * (y2 - y1);
    } 
    else 
    {
        cout << (x2 - x1) * (y2 - y1);
    }
}
