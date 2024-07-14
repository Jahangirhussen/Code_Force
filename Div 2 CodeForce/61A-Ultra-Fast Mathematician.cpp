/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :Ultra-Fast Mathematician
Problem Number :61A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/61/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
string a,b;
cin>>a>>b;

for(int i=0;i<a.size();i++)
{
    if(a[i]==b[i]) a[i]='0';
    else a[i]='1';
}
cout<<a<<endl;

    return 0;
}




