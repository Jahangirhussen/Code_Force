/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Football
Problem Number :96A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/96/A
STATUS         :Accepted
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int count=1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count ++;

            if(count==7) break;
        }
        else count=1;
    }


    if(count==7)cout<<"YES ";
    else cout<<"NO";

    return 0;
}

