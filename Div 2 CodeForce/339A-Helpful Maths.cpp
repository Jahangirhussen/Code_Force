/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Helpful Maths
Problem Number : 339A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/339/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
sort(s.begin(),s.end());

for(int i=(s.size()/2) ;i<s.size() ;i++ )
{
    cout<<s[i];
    if(i<s.size()-1) cout<<'+';
}
    return 0;
}
