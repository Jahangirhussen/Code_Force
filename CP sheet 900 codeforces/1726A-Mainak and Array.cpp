/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Mainak and Array
Problem Number : 1726A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1726/A
STATUS         : Accepted
Problem Task   : Given an array, maximize the value of (a[n-1] - a[0]) after performing one operation.

Problem Logic  :
   1. If there is only one element, the difference is 0.
   2. If there are multiple elements:
      - Fix the last element and compute the maximum difference using the remaining elements.
      - Fix the first element and compute the maximum difference using the remaining elements.
      - Compute the difference between adjacent elements.
   3. Determine the maximum difference from the above calculations.
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];

        int ans = 0;

        // Last element stable
        for (int i = 0; i < n - 1; i++) ///n-1 is last so eta touch hobe na
            ans = max(ans, v[n - 1] - v[i]);

        // First element stable ///a[0] is first so eta touch hobe na
        for (int i = 1; i < n; i++)
            ans = max(ans, v[i] - v[0]);

        // Otherwise pasa pasi max min takle eder eksathe k times 1 kore kore rothed korle 1st and ans ek smy 1st e min last e max chole jy ,so pase pasi max kujte hobe amader
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, v[i] - v[i + 1]);

        cout << ans << endl;
    }

    return 0;
}

