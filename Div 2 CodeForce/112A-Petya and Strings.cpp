/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Petya and Strings
Problem Number : 112A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/112/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{

        string s1, s2;
        cin >> s1 >> s2;
        int x = 0;

        // Convert s1 to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    // Convert s2 to lowercase
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

        // Compare strings lexicographically  int x = s1.compare(s2); or down
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] < s2[i]) {
                x = -1;
                break;
            } else if (s1[i] > s2[i]) {
                x = 1;
                break;
            }
        }

        cout << x << endl;


    return 0;
}
