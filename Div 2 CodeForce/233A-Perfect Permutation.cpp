/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Perfect Permutation
Problem Number :233A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/233/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << -1 << endl;

    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }

    return 0;
}



