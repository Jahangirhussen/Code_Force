/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Goals of Victory
Problem Number : 1877A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1877/A
STATUS         : Accepted
Problem Logic  : n team takbe,amra n-1 porjonto value janbo,last team er gool koyta ber korbo,,note total goal=0 hobe
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,goal=0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n-1; i++)
        {
            cin>>a[i];
            goal=goal+a[i];
        }
        cout<<-(goal)<<endl;

    }

    return 0;
}

