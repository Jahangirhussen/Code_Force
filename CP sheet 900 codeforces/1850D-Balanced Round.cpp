/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : D. Balanced Round
Problem Number : 1850D
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1850/D
STATUS         : Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> v;
        sort(a.begin(), a.end());
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) <= k)
            {
                count++;
                /**
                 last value jodi 2 ta same hoy tahole count ++ hobe but eta kintu else e jabe na,
                  tai push back in hobe na ,ejnno amader last e loop er baire eta in kore dibo
                */
            }
            else
            {
                v.push_back(count);
                count = 1;
            }
        }
        v.push_back(count);/// last 2 value jnno ,if same add else 1 in 2 times ,after sort its doesnt matter

        sort(v.begin(), v.end());
        cout << n - v.back() << endl;/// dig sob k range a hole minus korle zero ase ei karone
    }
    return 0;
}
