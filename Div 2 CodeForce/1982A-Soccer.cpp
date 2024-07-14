
/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Soccer
Problem Number :1982A
Difficulty     :div 2
Problem Link   :https://codeforces.com/problemset/problem/
STATUS         :Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a > b && c > d) || (a < b && c < d))
            {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
