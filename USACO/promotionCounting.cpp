#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int sb, sa, gb, ga, pb, pa, bb, ba;
    cin >> bb >> ba >> sb >> sa >> gb >> ga >> pb >> pa;

    int gold = pa - pb;
    int silver = ga - gb + pa - pb;
    int bronze = sa - sb + ga - gb + pa - pb;

    cout << bronze << "\n";
    cout << silver << "\n";
    cout << gold << "\n";
}