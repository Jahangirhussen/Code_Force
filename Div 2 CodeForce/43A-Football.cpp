/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Football
Problem Number : 43A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/43/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string goal;
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> goal;
        m[goal]++;
    }

    string winner;
    int maxGoals = 0;

    // Finding the team with the maximum goals
    for (auto i = m.begin(); i != m.end(); ++i)
    {
        if (i->second > maxGoals)
        {
            maxGoals = i->second;
            winner = i->first;
        }
    }

    cout << winner << endl;

    return 0;
}
