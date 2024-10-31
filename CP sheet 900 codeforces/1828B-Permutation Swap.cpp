/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Permutation Swap
Problem Number : 1828B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1828/B
STATUS         : Accepted

Problem Task   :
- You are given a permutation of the first `n` positive integers.
- The goal is to calculate the greatest common divisor (GCD) of the differences between each element in the permutation and its 1-based index.

Problem Logic  :
  - Compute the absolute difference between each element and its 1-based index.
  - Calculate the GCD of these differences.
  - Output the GCD.
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
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int common_k_for_all = 0;
        for (int i = 0; i < n; i++)
        {
            int k = abs(p[i] - (i + 1));
            common_k_for_all = __gcd(common_k_for_all, k);
        }
        cout << common_k_for_all << endl;
    }
    return 0;
}
