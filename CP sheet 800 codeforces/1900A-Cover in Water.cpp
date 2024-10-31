/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Cover in Water
Problem Number :1900A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1900/A
STATUS         :Accepted
Problem Logic  :
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0;
        string s;
        cin>>n>>s;
        n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
            {
                e=2;
                break;
            }
            else  if(s[i]=='.' )
            {
                e++;
            }
        }
        cout<<e<<endl;



    }

    return 0;
}
