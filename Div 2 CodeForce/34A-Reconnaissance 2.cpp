/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Reconnaissance 2
Problem Number : 34A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/34/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x,y,different=10000;
cin>>n;
vector<pair<int,int>>a;
for(int i=1;i<=n;i++)
{
    int x;
    cin>>x;
    a.push_back({x,i});
}
a.push_back(a.front());

for(int i=0;i<n;i++)
{
    if(abs(a[i].first - a[i+1].first)<different)
    {
        x=a[i].second;
        y=a[i+1].second;
        different=abs(a[i].first - a[i+1].first);
    }
}
cout<<x<<" "<<y;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,different =0,x,y;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
     different=max(different,a[i]);
}

for(int i=0;i<n;i++)
{
    if(i==n-1)
    {
      if(abs(a[n-1]-a[0])<different)
    {
        x=i,y=i+1;
        different=abs(a[i]-a[i+1]);

    }
    }
  else  if(abs(a[i]-a[i+1])<different)
    {
        x=i,y=i+1;
        different=abs(a[i]-a[i+1]);

    }
}
if(y+1>n)y=y-n;
if(x+1>n)x=x+1-n;
cout<<x+1<<" "<<y+1<<endl;
    return 0;
}*/
