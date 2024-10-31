
/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. How Much Does Daytona Cost?
Problem Number : 1878A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1878/A
STATUS         : Accepted
Problem Logic  :k ace kina amader array te
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        string s="NO\n";
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==k) s="YES\n";
        }
        cout<<s;

    }

    return 0;
}
