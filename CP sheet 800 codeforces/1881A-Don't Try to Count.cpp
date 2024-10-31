/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A.  Don't Try to Count
Problem Number :1881A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1881/A
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
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans=-1;
        for(int i=0; i<10; i++)
        {
            if(x.find(s)!=-1) ///s k x er bitor pawa jacche kina cheek
            {
                ans=i;
                break;
            }
            x=x+x;
        }
        cout<<ans<<endl;
    }

    return 0;
}

