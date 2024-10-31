/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Line Trip
Problem Number :1901A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1901/A
STATUS         :Accepted
Problem Logic  :
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 2];
        a[n + 1] = x;
        a[0] = 0;
        for (int i = 1; i<=n; i++)
        {
            cin >> a[i];
        }

        int vol = 0;
        vol = max(vol, (2 * abs(a[n] - x)));
        for (int i = 1; i <= n; i++)
        {
            int diff = abs(a[i] - a[i - 1]);
            vol = max(vol, diff);
        }
        cout << vol << endl;
    }

    return 0;
}
