/*
ID: john38
TASK: transform
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

struct board
{
    int n;
    char board[10][10];
};

void print(board p)
{
    for (int i = 0; i < p.n; i++)
    {
        cout << "\n";
        for (int j = 0; j < p.n; j++)
        {
            cout << p.board[i][j];
        }
    }
    cout << "\n";
}

board rotate(board og)
{
    board fin;
    fin.n = og.n;
    
    for (int i = 0; i < og.n; i++)
    {
        for (int j = 0; j < og.n; j++)
        {
            fin.board[j][og.n - 1 - i] = og.board[i][j];
        }
    }

    return fin;
}

board flip(board og)
{
    board fin;
    fin.n = og.n;
    
    for (int i = 0; i < og.n; i++)
    {
        for (int j = 0; j < og.n; j++)
        {
            fin.board[i][og.n - 1 - j] = og.board[i][j];
        }
    }

    return fin;
}

bool eq(board og, board fin)
{
    for (int i = 0; i < fin.n; i++)
    {
        for (int j = 0; j < fin.n; j++)
        {
            if (og.board[i][j] != fin.board[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);

    int n;
    cin >> n;

    board input, goal;
    input.n = n, goal.n = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> input.board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> goal.board[i][j];
        }
    }

    board temp = input;
    
    for (int i = 0; i < 3; i++)
    {
        board curr = rotate(temp);

        if (eq(curr, goal))
        {
            cout << i + 1 << "\n";
            return 0;
        }

        temp = curr;
    }

    temp = flip(input);
    if (eq(temp, goal))
    {
        cout << 4 << "\n";
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        board curr = rotate(temp);

        if (eq(curr, goal))
        {
            cout << 5 << "\n";
            return 0;
        }

        temp = curr;
    }

    if (eq(input, goal))
    {
        cout << 6 << "\n";
        return 0;
    }

    cout << 7 << "\n";    
}