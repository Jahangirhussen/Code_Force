/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Petr and Book
Problem Number : 139A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/139/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,read=0,day,i;
    cin>>n;
    int a[8];
    for( i=1; i<=7; i++)
    {
        cin>>a[i];
    }
    for(  i=1; i<=7; i++)
    {
        read=read+a[i];
        if(read>=n)
        {
            day=i;
            break;
        }
        else if(i==7)
        {
            i=0;
        }
    }
    cout<<day<<endl;
    return 0;
}
