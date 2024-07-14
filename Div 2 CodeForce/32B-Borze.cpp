/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Borze
Problem Number :29B
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/32/B
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,ans="";
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            ans=ans+'0';
        }

        else if (s[i]=='-'  && s[i+1]=='.')
        {
            ans=ans+'1';
            i++;
        }
        else if (s[i]=='-'  && s[i+1]=='-' )
        {
            ans=ans+'2';
            i++;
        }
    }
    cout<<ans<<endl;

    return 0;
}



