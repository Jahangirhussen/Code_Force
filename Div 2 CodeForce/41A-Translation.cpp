/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Translation
Problem Number : 41A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/41/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
string s,t;
cin>>s>>t;
reverse(t.begin(),t.end());
if(s==t)cout<<"YES \n";
else cout<<"NO \n";


    return 0;
}
