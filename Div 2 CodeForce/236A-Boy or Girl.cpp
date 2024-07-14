/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Boy or Girl
Problem Number : 236A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/236/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{


        string s;
        cin>>s;

        sort(s.begin(), s.end());
        int count = unique(s.begin(), s.end()) - s.begin();

        if(count%2==0)cout<<"CHAT WITH HER!"<<endl;
        else cout<<"IGNORE HIM!"<<endl;

    return 0;
}

