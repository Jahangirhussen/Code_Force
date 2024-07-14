/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Magic Numbers
Problem Number : 320A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/320/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans="YES\n";
    cin>>s;

    for(int i=0; i<s.size(); i++) ///note last value cheek dite hobe ,jodi eta single value hoy ,single 1 kintu yes onno kichu No,,so every digit important to define is magic or not
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i=i+2;
        }
        else  if(s[i]=='1' && s[i+1]=='4' )
        {
            i=i+1;
        }
        else if(s[i]=='1' )
        {

        }
        else
        {
            ans="NO\n";
            break;
        }


    }
    cout<<ans;
return 0;
}
