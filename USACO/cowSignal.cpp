#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(0)->sync_with_stdio(0);
    freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);

    int m, n, k;
	string line;
	string curr;
    cin >> m >> n >> k;

	for (int i = 0; i < m * k; i++)
	{
		if (i % k == 0)
		{
			getline(cin >> ws, line);
		}
		for (int j = 0; j < n * k; j++)
		{
			if (j % k == 0)
			{
				curr = line.substr(j / k, 1);
			}
			cout << curr;
		}
		cout << "\n";
	}
}