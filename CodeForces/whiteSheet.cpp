#include <bits/stdc++.h>

using namespace std;

struct board {
    long long x1, x2, y1, y2;
    long long area()
    {
        return (x2 - x1) * (y2 - y1);
    }
};

long long overlap(board a, board b)
{
    long long xO = max(min(a.x2, b.x2) - max(a.x1, b.x1), (long long)0);
    long long yO = max(min(a.y2, b.y2) - max(a.y1, b.y1), (long long)0);
    return xO * yO;
}

long long overlapv2(board a, board b, board c)
{
    long long xO = max(min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1), (long long)0);
    long long yO = max(min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1), (long long)0);
    return xO * yO;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    board sheet, bb1, bb2;
    cin >> sheet.x1 >> sheet.y1 >> sheet.x2 >> sheet.y2;
    cin >> bb1.x1 >> bb1.y1 >> bb1.x2 >> bb1.y2;
    cin >> bb2.x1 >> bb2.y1 >> bb2.x2 >> bb2.y2;
	
    if ((sheet.area() - (overlap(sheet, bb1) + overlap(sheet, bb2)) + overlapv2(sheet, bb1, bb2) == 0))
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
    
}
