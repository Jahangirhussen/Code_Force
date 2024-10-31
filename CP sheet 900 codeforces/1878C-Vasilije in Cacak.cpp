/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : C. Vasilije in Cacak
Problem Number : 1878C
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1878C
STATUS         : Accepted
Problem Logic  :

1) Minimum Sum:
Given n = 9 (i.e., numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9) and k = 3,
to select k numbers, the minimum sum will be the sum of the first k numbers: 1, 2, 3.
The sum of these numbers is 6.
The minimum sum must be equal to or greater than x because selecting numbers from 1 to k gives the minimum sum.

Formula:
sum_1_to_k = k × (k + 1) / 2

2) Maximum Sum:
Given n = 9 (i.e., numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9) and k = 3,
the maximum k numbers will be 7, 8, 9.
The sum of these numbers is 24.
The maximum sum must be greater than x because selecting numbers from n to n - (k - 1) gives the maximum sum.

Formula:
sum_k_to_n = n × (n + 1) / 2 − (n − k) × (n − k + 1) / 2 === (n * (n + 1)) / 2 - ((k - 1) * k) / 2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, k, x; /// long long er jnnno onek error kaici more than 30+ error  6sept 2024 ,maxx error of my life
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;

        long long  sum_1_to_k = (k * (k + 1)) / 2;
        long long d=n-k;// 9-3=6
        long long  sum_last_k = (n * (n + 1)) / 2 - (d * (d+ 1)) / 2;/// sum 1st  9 to minues sum 1st 6= find sum last 9-6=3;

        bool ans = (x <= sum_last_k) && (sum_1_to_k <= x);

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}
