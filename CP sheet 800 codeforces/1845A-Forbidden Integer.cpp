/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Forbidden Integer
Problem Number : 1845A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1845/A
STATUS         : Accepted
**/
#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin>>t;
    while(t--)

    {
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1)///
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1; i<=n; i++) cout<<1<<' ';
            cout<<endl;
        }
        else if(k>=2 && n%2==0)/// x=1 is here,dont here use 1 ,but is k>=2 and n is #even ,than use 2 in n/2 times
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=1; i<=n/2; i++) cout<<2<<' ';
            cout<<endl;
        }
        else if(k>=3)/// x=1 and n is #odd ,,also here,if n=11 ,k=3,x=1 so 3  2 2 2 2 means all is 2 but extra odd 1 is add any 2 than become 3
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            cout<<3<<' ';
            for(int i=1; i<=(n/2)-1; i++) cout<<2<<' ';
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

