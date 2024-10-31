/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Buttons
Problem Number : 1858A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1858/A
STATUS         : Accepted
Problem Logic  :
**/
#include "bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        a += (c / 2) + (c % 2);
        b += (c / 2);

        cout << (a > b ? "First\n" : "Second\n");
    }
    return 0;
}
