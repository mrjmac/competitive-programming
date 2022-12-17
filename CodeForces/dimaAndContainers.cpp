#include <bits/stdc++.h>

using namespace std;

string input[4] = {"pushStack", "pushQueue", "pushFront", "pushBack"};
string output[4] = {"popStack", "popQueue", "popFront", "popBack"};

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, cmd, numStored = 0;
    cin >> n;

    vector<pair<int, int>> structs;

    for (int i = 0; i < n; i++)
    {
        cin >> cmd;

        if (cmd == 0)
        {
            if (numStored <= 3)
            {
                for (int j = 0; j < numStored; j++)
                {
                    cout << input[j] << "\n";
                }

                cout << numStored;

                for (int j = 0; j < numStored; j++)
                {
                    cout << " " << output[j];
                }

                cout << "\n";
                structs.clear();
                numStored = 0;
                continue;
            }

            sort(structs.begin(), structs.end());

            vector<int> id(numStored);

            for (int j = 0; j < numStored; j++)
            {
                id[structs[j].second] = j;
            }

            for (int j = 0; j < numStored; j++)
            {
                if (id[j] == numStored - 3)
                {
                    cout << input[2] << "\n";
                }
                else if (id[j] == numStored - 2)
                {
                    cout << input[1] << "\n";
                }
                else if (id[j] == numStored - 1)
                {
                    cout << input[0] << "\n";
                }
                else
                {
                    cout << input[3] << "\n";
                }
            }

            cout << 3;
            structs.clear();
            numStored = 0;

            for (int j = 0; j < 3; j++)
            {
                cout << " " << output[j];
            }

            cout << "\n";
        }
        else
        {
            structs.push_back(make_pair(cmd, numStored++));
        }
    }

    for (int i = 0; i < numStored; i++)
    {
        cout << input[0] << "\n";
    }
}