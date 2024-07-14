/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Tram
Problem Number :116A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/116/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;

    }

    int avalable=v[0].second;
    int max=avalable;
    for(int i=1; i<n; i++)
    {
      avalable =  avalable- v[i].first+ v[i].second ;
      if(avalable > max) max=avalable;


    }
cout<<max<<endl;
/*
  int n;
    cin >> n;
    int max_capacity = 0, current_capacity = 0;

    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        current_capacity = current_capacity - ai + bi;
        if (current_capacity > max_capacity)
            max_capacity = current_capacity;
    }

    cout << max_capacity << endl;


*/
    return 0;
}
