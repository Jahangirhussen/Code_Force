/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Two Permutations
Problem Number : 1761A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1761/A
STATUS         : Accepted
Problem Logic  :midium
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (n == a && n == b || n - (a + b) >= 2)
        /* n=6 a=2,b=3.... so 1st 2 index same,,,last 3 same so fillum 2+3=5
          total index is 6 after fill up we need 2 more index to reserven to more index than ans yes
        */
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
