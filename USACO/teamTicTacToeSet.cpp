#include <bits/stdc++.h>

using namespace std;

vector<string> board(3);
set<set<char>> winners[4];

void insert(vector<pair<int, int>> coord)
{
    set<char> there;
    for (int i = 0; i < 3; i++)
    {
        there.insert(board[coord[i].first][coord[i].second]);
    }

    winners[there.size()].insert(there);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    for (int i = 0; i < 3; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < 3; i++)
    {
        insert({{i, 0}, {i, 1}, {i, 2}});
    }

   for (int i = 0; i < 3; i++)
   {
        insert({{0, i}, {1, i}, {2, i}});
   }

   insert({{0, 0}, {1, 1}, {2, 2}});
   insert({{2, 0}, {1, 1}, {0, 2}});

   cout << winners[1].size() << "\n";
   cout << winners[2].size() << "\n";
}