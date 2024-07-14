/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. HQ9+
Problem Number :133A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/318/A
STATUS         :Accepted
Problem Logic  :in have H or Q or 9 in the string than print YEs else no
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string p = "NO";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            p = "YES";
            break;
        }
    }

    cout << p;
    return 0;
}
