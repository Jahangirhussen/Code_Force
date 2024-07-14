/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Insomnia cure
Problem Number :148A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/200/B
STATUS         :Accepted
Problem Logic  :input mane por por kotogula asche

input:
1 ekta por por asle x kaj korbe
2 dui ta por por asle y kaj korbe
3 thin ta por por asle z kaj korbe
4 char ta por por asle w kaj korbe

12 =total dragon
1 2 3 4 5 6 7 8 9 10 11 12

**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  k,l,m,n, d,count=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 ||i%m==0 ||i%n==0 )count++;

    }

    cout<<count<<endl;
    return 0;
}
