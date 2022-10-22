#include <bits/stdc++.h>

using namespace std;

bool usedCow[100], usedPos[100];
int pos[100];

int n, m, k;

int order[100];

int c[100];
int p[100];


bool valid()
{
    for (int i = 0; i < n; i++)
    {
        usedCow[i] = usedPos[i] = 0;
    }

    for (int i = 0; i < k; i++)
    {
        if (usedCow[c[i]] && pos[c[i]] == p[i])
        {
            continue;
        }
        if (usedCow[c[i]])
        {
            return 0;
        }
        if (usedPos[p[i]])
        {
            return 0;
        }

        usedCow[c[i]] = 1;
        usedPos[p[i]] = 1;
        pos[c[i]] = p[i];
    }

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        int cow = order[i];
        if (usedCow[cow])
        {
            if (j > pos[cow])
            {
                return 0;
            }

            j = pos[cow];
            continue;
        }
        while (usedPos[j])
        {
            j++;
            if (j == n)
            {
                return 0;
            }
        }

        usedPos[j] = 1;
        pos[cow] = j;
    }
    return 1;
}


int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("milkorder.in", "r", stdin);
    freopen("milkorder.out", "w", stdout);

    cin >> n >> m >> k;

    for (int i = 0; i < m; i++)
    {
        cin >> order[i];
        order[i]--;
    }

    for (int i = 0; i < k; i++)
    {
        cin >> c[i] >> p[i];
        c[i]--, p[i]--;
    }

    k += 1;

    for (int i = 0; i < n; i++)
    {
        c[k - 1] = 0;
        p[k - 1] = i;
        if (valid())
        {
            cout << i + 1 << "\n";
            return 0;
        }
    }
}