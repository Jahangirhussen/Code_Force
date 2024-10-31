/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   :B. 01 Game
Problem Number :1373B
Difficulty     : 900
Problem Link   :
STATUS         : Accepted
Problem Logic  :
Problem Task   :
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();

            int one=0,zero=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')one++;
                else zero++;
            }
            int ans=min(zero,one);
            if(ans%2==0)cout<<"NET\n";
            else cout<<"DA\n";

        }




    return 0;
}

