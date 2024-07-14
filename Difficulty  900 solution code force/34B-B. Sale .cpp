/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Sale
Problem Number :34B
Difficulty     :900
Problem Link   :https://codeforces.com/problemset/problem/34/B
STATUS         :Accepted
Problem Logic  :onek tv,er modde neg gula sell korte bola hoy question e,only neg gula,koyta negative nibe seta input a nibo as a M,n total TV
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,money=0;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<m;i++) ///6 6 ____  756 -611 251 -66 572 -818   output 1495_________
{
   if(a[i]<0) money=money+a[i];
}


cout<<abs(money);
    return 0;
}
