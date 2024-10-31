/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Desorting
Problem Number : 1853A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1853/A
STATUS         : Accepted
Problem Logic  :
**/
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // input section
        int n;
        cin >> n;
        vector<int> a(n); // ভেক্টর ব্যবহার করা হয়েছে
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

//logic and output
        if (!is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
        }
        else
        {
            sort(a.begin(), a.end());
            int min_diff = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                min_diff = min(min_diff, a[i] - a[i - 1]);///je 2 tar different min segular ekta barabo ekta 1 komabo thasn unsorterd hoye jabe
            }
            cout << (min_diff / 2) + 1 << endl;
        }
    }

    return 0;
}
