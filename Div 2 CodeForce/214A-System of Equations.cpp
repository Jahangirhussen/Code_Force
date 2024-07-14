/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. System of Equations
Problem Number : 214A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/214/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;

    for (int a = 0; a * a <= n; a++)
    {
        int b = n - a * a;/// b cheek kortechi tai if a eta if a lagbe na
        if (a + b * b == m)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
