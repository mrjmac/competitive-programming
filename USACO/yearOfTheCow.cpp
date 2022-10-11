#include <bits/stdc++.h>

using namespace std;

string animals[]{"Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat"};

map<string, int> born;

string yearToAnimal(int year)
{
    int animal = 0, currYear = 2022;

    while (currYear < year)
    {
        currYear++;
        animal++;
        animal == 12 ? animal = 0 : animal = animal;
    }

    while (currYear > year)
    {
        currYear--;
        animal--;
        animal == -1 ? animal = 11 : animal = animal;
    }

    return animals[animal];

}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    born["Bessie"] = 2022;

    for (int i = 0; i < n; i++)
    {
        string cow1, trash, relation, type, cow2;

        cin >> cow1 >> trash >> trash >> relation >> type >> trash >> trash >> cow2;

        born[cow1] = born[cow2];

        do
        {
            if (relation == "previous")
            {
                born[cow1] = born[cow1] - 1;
            }
            else
            {
                born[cow1] = born[cow1] + 1;
            }
        }
        while (!(yearToAnimal(born[cow1]) == type));
    }

    int ans = abs(born["Bessie"] - born["Elsie"]);

    cout << ans << "\n";
}