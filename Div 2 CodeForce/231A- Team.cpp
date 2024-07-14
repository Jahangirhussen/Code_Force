/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A.  Team
Problem Number : 231A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/231/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,count=0;
cin>>n;
while(n--)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c >=2)count ++;
}
cout<<count<<endl;
    return 0;
}
