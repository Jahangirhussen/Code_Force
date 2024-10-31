
/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Grasshopper on a Line
Problem Number : 1837A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1837/A
STATUS         : Accepted
Problem Logic  :
**/
#include"bits/stdc++.h"
using namespace std;


int main()
{
int t;
cin>>t;
while(t--)
{
    int x,k;
    cin>>x>>k;

    if(x%k==0){
        cout<<2<<endl<<x-k-1<<" "<<k+1<<endl;
    }
    else cout<<1<<endl<<x<<endl;


}

    return 0;
}
