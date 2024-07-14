/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Little Elephant and Function

Problem Number : 221A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/221/A
STATUS         : Accepted
Problem Logic  :sort korte boleche ,sort 1 to n hoy ,but input a age n hoyeche then 1 to n-1 hoyeche ,
tast the main logic from input and putput example
**/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)cout<<1<<endl;
    else
    {
        cout<<n<<" ";
        for(int i=1; i<n; i++)cout<<i<<" ";
    }
    return 0;
}
