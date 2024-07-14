/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Dragons
Problem Number : 230A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/230/A
STATUS         : Accepted
Problem Logic  :je group ta asbe dragon er eder sobai k hraile yes,,
ekn amr power 10 ,ekta dran er power 9 arek 11 ,ekn ami ekaroke haraite gele parbo na nije morbo ,
so age 9 k harabo haraile 9 theke  y power bonus pabo than amr power 10+y hobe than 11 k harabo ,
mane dragon ,kom power walader age harabo ,haroye eder power nibo
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    string ans = "YES\n";

    cin >> s >> n;

    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d[i].first >> d[i].second;
    }

    sort(d.begin(), d.end());

    for (int i = 0; i < n; i++) {
        if (s <= d[i].first) {
            ans = "NO\n";
            break;
        }

        s += d[i].second;
    }

    cout << ans;

    return 0;
}
