#include <bits/stdc++.h>

using namespace std;

char path[48];
bool board[9][9];

int backtrack(int pathi, int x, int y)
{

    if ((board[x][y - 1] && board[x][y + 1]) && (!board[x - 1][y] && !board[x + 1][y]))
    {
        return 0;
    }
    if ((board[x - 1][y] && board[x + 1][y]) && (!board[x][y - 1] && !board[x][y + 1]))
    {
        return 0;
    }

    if (x == 1 && y == 7)
    {
        if (pathi == 48)
        {
            return 1;
        }
        return 0;
    }

    if (pathi == 48)
    {
        return 0;
    }

    int ret = 0;
    board[x][y] = true;

    if (path[pathi] != '?')
    {
        if (path[pathi] == 'L')
        {
            if (!board[x - 1][y])
            {
                ret += backtrack(pathi + 1, x - 1, y);
            }
        }
        if (path[pathi] == 'R')
        {
            if (!board[x + 1][y])
            {
                ret += backtrack(pathi + 1, x + 1, y);
            }
        }
        if (path[pathi] == 'D')
        {
            if (!board[x][y + 1])
            {
                ret += backtrack(pathi + 1, x, y + 1);
            }
        }
        if (path[pathi] == 'U')
        {
            if (!board[x][y - 1])
            {
                ret += backtrack(pathi + 1, x, y - 1);
            }
        }
    }
    else
    {
        if (!board[x - 1][y])
        {
            ret += backtrack(pathi + 1, x - 1, y);
        }

        if (!board[x][y + 1])
        {
            ret += backtrack(pathi + 1, x, y + 1);
        }

        if (!board[x + 1][y])
        {
            ret += backtrack(pathi + 1, x + 1, y);
        }

        if (!board[x][y - 1])
        {
            ret += backtrack(pathi + 1, x, y - 1);
        }
    }
    

    board[x][y] = false;
    return ret;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s; 
    cin >> s;

    for (int i = 0; i < 9; i++)
    {
        board[0][i] = true;
        board [8][i] = true;
        board[i][0] = true;
        board [i][8] = true;
    }
    board[1][1] = true;

    for (int i = 0; i < 48; i++)
    {
        path[i] = s[i];
    }
    
    int ans = backtrack(0, 1, 1);
    cout << ans << "\n";
}