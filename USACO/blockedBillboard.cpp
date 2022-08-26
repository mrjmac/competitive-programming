#include <bits/stdc++.h>

using namespace std;

struct board {
    int x1, x2, y1, y2;
    int area()
    {
        return (x2 - x1) * (y2 - y1);
    }
};

int overlap(board a, board b)
{
    int xO = max(min(a.x2, b.x2) - max(a.x1, b.x1), 0);
    int yO = max(min(a.y2, b.y2) - max(a.y1, b.y1), 0);
    return xO * yO;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    board truck, ba, bb;
    cin >> ba.x1 >> ba.y1 >> ba.x2 >> ba.y2;
    cin >> bb.x1 >> bb.y1 >> bb.x2 >> bb.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
	
    cout << ba.area() + bb.area() - (overlap(ba, truck) + overlap(bb, truck));
}
