/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A.Amusing Joke
Problem Number : 141A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/141/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string geust,host,pile;
    cin>>geust>>host>>pile;

    string old=geust+host;

    sort(old.begin(),old.end());
    sort(pile.begin(),pile.end());

    if(old.size()==pile.size() && old==pile)
    {
       cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}

