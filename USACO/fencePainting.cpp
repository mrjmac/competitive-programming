#include <bits/stdc++.h>

using namespace std;

int main()
{
    //cin.tie(0)->sync_with_stdio(0);
    freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int falseTotal = (b - a) + (d - c);
    int intersection = max(min(b, d) - max(a, c), 0);
    cout << falseTotal - intersection << "\n";
}