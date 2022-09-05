#include <bits/stdc++.h>

using namespace std;

bool checkSingle(char ch, vector<string> b)
{
    for (int i = 0; i < 3; i++)
    {
        if (b[i][0] == ch && b[i][1] == ch && b[i][2] == ch)
        {
            return true;
        }

        if (b[0][i] == ch && b[1][i] == ch && b[2][i] == ch)
        {
            return true;
        }
    }

    if (b[0][0] == ch && b[1][1] == ch && b[2][2] == ch)
    {
        return true;
    }

    if (b[0][2] == ch && b[1][1] == ch && b[2][0] == ch)
    {
        return true;
    }
    return false;
}

bool doubleHelper(char ch1, char ch2, char x, char y, char z)
{
    if (x == y && x != z)
    {
        if (x == ch1 && z == ch2)
        {
            return true;
        }
        if (x == ch2 && z ==  ch1)
        {
            return true;
        }
    }
    else if (x == z && x != y)
    {
        if (x == ch1 && y == ch2)
        {
            return true;
        }
        if (x == ch2 && y == ch1)
        {
            return true;
        }
    }
    else if (y == z && x != y)
    {
        if (y == ch1 && x == ch2)
        {
            return true;
        }
        if (y == ch2 && x == ch1)
        {
            return true;
        }
    }
    return false;
}

bool checkDoubleWins(char ch1, char ch2, vector<string> b)
{
    for (int i = 0; i < 3; i++)
    {
        if (doubleHelper(ch1, ch2, b[i][0], b[i][1], b[i][2]))
        {
            return true;
        }

        if (doubleHelper(ch1, ch2, b[0][i], b[1][i], b[2][i]))
        {
            return true;
        }
    }

    if (doubleHelper(ch1, ch2, b[0][0], b[1][1], b[2][2]))
    {
        return true;
    }

    if (doubleHelper(ch1, ch2, b[0][2], b[1][1], b[2][0]))
    {
        return true;
    }
    return false;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    int single = 0, doublewins = 0;
    vector<string> board(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> board[i];
    }

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        single += checkSingle(ch, board);
    }

    for (char ch1 = 'A'; ch1 <= 'Z'; ch1++)
    {
        for (char ch2 = ch1 + 1; ch2 <= 'Z'; ch2++)
        {
            doublewins += checkDoubleWins(ch1, ch2, board);
        }
    }

    cout << single << "\n";
    cout << doublewins << "\n";

}