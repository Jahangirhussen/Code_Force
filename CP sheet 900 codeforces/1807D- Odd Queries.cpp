/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : D. Odd Queries
Problem Number : 1807yD
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1807/D
STATUS         : Accepted
Problem Task   : Total sum theke,,,range badh dibo,,than ei range e new k size er value add korbo
Problem Logic  : Check if the updated total sum after adding a value to a range is odd or evenn
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n + 1, 0);
        vector<long long> pre_sum(n + 1, 0);

        for (int i = 1; i <= n; i++)/// one based array creted,karon always one based hobe,,amra zero diye shuro kori eta default
        {
            cin >> a[i];
            pre_sum[i] = pre_sum[i - 1] + a[i];
        }

        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long old_range_delet = pre_sum[r] - pre_sum[l - 1];
            long long new_range_add = k * (r - l + 1);
            long long update_sum = pre_sum[n] - old_range_delet + new_range_add;

            if (update_sum % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
