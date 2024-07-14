/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Stones on the Table
Problem Number :266A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/266/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,c=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<s.size(); i++) ///RRG
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
    }
    cout<<c;

    return 0;
}


