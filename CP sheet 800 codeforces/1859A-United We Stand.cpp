/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. United We Stand
Problem Number : 1859A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1859/A
STATUS         : Accepted
Problem Logic  :a array je value pabo seta b and c te rakboo,,but c te ja rakbo seta diye b er kaukie bag kora jabe na,,,
apra jodi chinta kori je max value diye kintu chuto kauke bag jay na,,so max value  k c te rakbo,
**/
#include"bits/stdc++.h"
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //INPUT model
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
                vector<int>b,c;

        //Main logical Work Here start
        for(int i=0; i<n; i++)
        {
        if(a[i] == a[n-1])c.push_back(a[i]);
        else b.push_back(a[i]);
        }


        //OUTPUT model
        if((b.size() <=0 )  || (c.size()<=0))cout<<-1<<endl; ///b and c te minimum ekta value rakte hobe,na rakle ans -1
        else
        {

            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i:b)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:c)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        c.empty();///for next test case
        b.empty();
    }



    return 0;
}

