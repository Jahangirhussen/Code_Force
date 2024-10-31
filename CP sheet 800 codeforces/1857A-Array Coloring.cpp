/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Array Coloring
Problem Number : 1857A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1857/A
STATUS         : Accepted
Problem Logic  :SAME PRAITY MEANS
1 way  )  SUM OF SAME PROITY mane blue color sum kore odd asbe and red color sum korle odd asabe ,,er mane eder juk korle even
2 way ) SUM OF SAME PROITY mane blue color sum kore even asbe and red color sum korle even asabe ,,er mane eder juk korle even
etai logai same same asbe ,both even or both odd,,both veven or both odd er sum korle always even hoy ..so need all some even or odd
**/
#include"bits/stdc++.h"
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            sum =sum+a[i];
        }


        cout<<( ( sum%2==0    ) ? "YES\n":"NO\n");

    }

    return 0;
}

