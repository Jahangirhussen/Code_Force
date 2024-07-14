/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Minimize Inversions
Problem Number :1918B
Difficulty     :900
Problem Link   :https://codeforces.com/problemset/problem/1918/B
STATUS         :Accepted
Problem Logic  :2 ta arrray nib0 eder pair korbo ,,ei first value niye sort korbe than 2 ta print dibo
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
        vector<pair<int, int>> p(n);///here p is pair and n is serial number as like array,deceler p and its index

        ///input part
        for(int i=0; i<n; i++)
        {
            cin>>p[i].first;///p er first value k first array dhori
        }
        for(int i=0; i<n; i++)
        {
            cin>>p[i].second;///p er second value k second array dhori
        }


    sort(p.begin(),p.end());///ei function first value niye sort kore

    ///print part
    for(int i=0; i<n; i++)
    {
        cout<<p[i].first<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<p[i].second<<" ";
    }

}
return 0;
}
