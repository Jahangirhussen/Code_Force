/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Game with Integers
Problem Number :1899A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1899/A
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
        int n;
        cin>>n;

        if(  (n-1)%3==0 || (n+1)%3==0 )
        {
            cout<<"First\n";
        }
        else
        {
            cout<<"Second\n";
        }
    }




    return 0;
}

