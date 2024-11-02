#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200000;

int n, ans;
vector<int> adj[MAXN + 10];
int l[MAXN + 10], r[MAXN + 10];
int depth[MAXN + 10], subtreeSize[MAXN + 10];

void dfs(int node, int parent) 
{
    depth[node] = 1;
    subtreeSize[node] = 1;

    for (int v : adj[node]) 
    {
        if (v == parent)
        {
            continue;
        }

        if (!l[node])
        {
            l[node] = v;
        }
        else 
        {
            r[node] = v;
        }


        dfs(v, node);

        depth[node] = max(depth[l[node]], depth[r[node]]) + 1;
        subtreeSize[node] = subtreeSize[l[node]] + subtreeSize[r[node]] + 1;
    }
}

void remove(int node, int dep) 
{
    if (!node)
    {
        return;
    }

    if (dep == 0)
    {
        ans -= subtreeSize[l[node]] + subtreeSize[r[node]];

        l[node] = 0;
        r[node] = 0;

        depth[node] = 1;
        subtreeSize[node] = 1;
        
        return;
    }

    remove(l[node], dep - 1);
    remove(r[node], dep - 1);

    depth[node] = max(depth[l[node]], depth[r[node]]) + 1;
    subtreeSize[node] = subtreeSize[l[node]] + subtreeSize[r[node]] + 1;
}

void solve(int node) 
{
    if (!node) 
    {
        return;
    }

    solve(l[node]);
    solve(r[node]);

    if (depth[l[node]] > depth[r[node]])
    { 
        swap(l[node], r[node]);
    }

    if (depth[r[node]] - depth[l[node]] > 1)
    {
        remove(r[node], depth[l[node]]);
    }

    depth[node] = max(depth[l[node]], depth[r[node]]) + 1;
    subtreeSize[node] = subtreeSize[l[node]] + subtreeSize[r[node]] + 1;
}

int main() 
{
    cin.tie(0)->sync_with_stdio(0);

    cin >> n;
    ans = n;

    for (int i = 1; i < n; ++i) 
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0);
    solve(1);

    cout << n - ans << "\n";
}
