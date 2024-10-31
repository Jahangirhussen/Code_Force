/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Make it Beautiful
Problem Number : 1783A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1783/A
STATUS         : Accepted
Problem Logic  :essay
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (a[0] == a[n-1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            sort(a.begin(), a.end());

            cout<<a[n-1]<<" ";
            for (int i = 0; i < n-1; ++i) cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}

