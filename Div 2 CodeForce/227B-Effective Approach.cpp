/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : B. Effective Approach
Problem Number : 227B
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/227/B
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input section
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }




    //  // Calculate f  ,Ascending order search
    long long f = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(b[i] == a[j])
            {
                f += j + 1; // Adding 1 because positions are 1-based
                break;
            }
        }
    }

    // Calculate l  ,Descending order search
    long long l = 0;
                  for(int i = 0; i < m; i++)
    {
        for(int j = n - 1; j >= 0; j--)
        {
            if(b[i] == a[j])
            {
                l += n - j; // Adding 1 because positions are 1-based
                break;
            }
        }
    }
/**
without runtime error code is:
_________________________________________
// Calculate positions of elements in array a
    int pos[n + 1];
    memset(pos, 0, sizeof(pos)); // Initialize pos array to 0
    for(int i = 1; i <= n; i++)
    {
        pos[a[i]] = i;
    }

    // Calculate f and l in a single loop
    long long f = 0, l = 0;
    for(int i = 1; i <= m; i++)
    {
        f += pos[b[i]];
        l += n - pos[b[i]] + 1;
    }

/*
    // Output section
    cout << f << " " << l << endl;
    return 0;
}

