/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Make It Zero
Problem Number : 1869A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1869/A
STATUS         : Accepted
Problem Logic  :
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1); // 1-based indexing

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if (n % 2 == 0) {
            cout << "2\n";
            cout << "1 " << n << '\n';
            cout << "1 " << n << '\n';
        } else {
            cout << "4\n";
            cout << "1 " << n << '\n';
            cout << "2 " << n << '\n';
            cout << "1 2\n";
            cout << "1 2\n";
        }
    }

    return 0;
}
