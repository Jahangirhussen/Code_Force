/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   :A. Three Indices
Problem Number :1380A
Difficulty     : 900
Problem Link   :https://codeforces.com/problemset/problem/1380/A
STATUS         : Accepted
Problem Logic  :
Problem Task   :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int p[n];
        for(int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        bool found = false;
        for(int i = 1; i < n-1; i++)
        {
            if(p[i] > p[i-1] && p[i] > p[i+1])
            {
                cout << "YES\n";
                cout << i-1 + 1 << " " << i + 1 << " " << i + 1 + 1 << endl;
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout << "NO\n";
        }
    }

    return 0;
}
