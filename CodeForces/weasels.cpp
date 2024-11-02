#include <bits/stdc++.h>

using namespace std;

string clean(string original)
{
    int count = 0;
    for (int i = 0; i < (int) original.size(); i++)
    {
        if (original[i] == 'B')
        {
            count++;
        }
    }

    original.erase(remove(original.begin(), original.end(), 'B'), original.end());

    if (count % 2 != 0)
    {
        original = 'B' + original;
    }

    std::string::size_type pos;
    while ((pos = original.find("CC")) != std::string::npos || (pos = original.find("AA")) != std::string::npos) {
        original.erase(pos, 2);
    }

    return original;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        string w, b;
        cin >> w >> b;

        w = clean(w);
        b = clean(b);

        cout << ((w == b) ? "YES" : "NO") << "\n";
    }
}