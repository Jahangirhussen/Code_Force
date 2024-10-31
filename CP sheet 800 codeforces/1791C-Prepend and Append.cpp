
/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : C.Prepend and Append
Problem Number : 1791
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1791/C
STATUS         : Accepted
Problem Logic  :essay
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
        string s;
        cin >> n >> s;
        int i = 0, j = n - 1;

/*
if n=6 ,1st i=0 ,j=5  n=4
        2nd i=1, j=4  n=3
        3rd i=2, j=3  n=0
        4th i=3, j=2  here i>j so loop donesnt work so n is 0
if n=5 ,1st i=0 ,j=3  n=3
        2nd i=1, j=4  n=1
        3rd i=2, j=1  here i>j so loop donesnt work so n is 1

*/

        while (i < j && (s[i] != s[j]))/// first=i ,and last=j are not same for the rule,one this add 2 so we remove 2 to find his 1st time string it will be empty=0
        {
            n -= 2;
            i++;
            j--;
        }
        cout << n << endl;
    }
    return 0;
}
