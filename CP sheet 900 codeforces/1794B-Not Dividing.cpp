/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Not Dividing
Problem Number : 1794D
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1794/B
STATUS         : Accepted
Problem Task   :
                If a number is divisible by the next, increment the next. If 1 exists, change it to 2.
Problem Logic  :
                1. Change 1 to 2 since 1 divides any number.
                2. Loop through the array, and if any number is divisible by the previous, increment it.

**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==1)a[i]++;
        }
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1] % a[i]==0)a[i+1]++;
        }


        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
