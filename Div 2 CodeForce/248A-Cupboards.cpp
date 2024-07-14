/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Cupboards
Problem Number :248A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/248/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,left_0=0,left_1=0,  right_0=0,right_1=0;
    cin>>n;
    vector<pair<int ,int>> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;

        if(v[i].first==0) left_0++;
        else left_1 ++;

        if(v[i].second==0) right_0++;
        else right_1 ++;


    }
cout<< min(left_0,left_1) + min(right_0,right_1)<<endl;

    return 0;
}

