/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Bit++
Problem Number : 282A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/282/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X = 0, n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++") X++;
        if (s == "--X" || s == "X--") X--;
    }
    cout << X << endl;
    return 0;
}
