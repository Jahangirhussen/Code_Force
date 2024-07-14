/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Beautiful Matrix.cpp
Problem Number :263A
Difficulty     : Div 2
Problem Link   :https://codeforces.com/problemset/problem/263/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5,ans;
    int a[n][n];

    // Reading input into the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];

            if(a[i][j]==1) ans=abs(i-2) + abs(j-2);
        }
    }


    cout<<ans<<endl;
    return 0;
}
