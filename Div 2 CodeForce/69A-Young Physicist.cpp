/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A.Young Phydicist.cpp
Problem Number :69A
Difficulty     : Div 2
Problem Link   :https://codeforces.com/problemset/problem/69/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=3,x=0,y=0,z=0;
cin>>n;
while(n--)
{
int a,b,c;
    cin>>a>>b>>c;
    x=x+a;  ///ekane x=x+x; kaj kore na karon ager x=0 ok but new x paile update hoy abd x+x 2 bar coutn hoy,
    y=y+b;
    z=z+c;
}
    if(x==0 && y==0 && z==0) cout<<"YES ";

    else cout<<"NO ";


    return 0;
}
