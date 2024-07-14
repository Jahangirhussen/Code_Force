/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Gravity Flip
Problem Number :405A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/405/A
STATUS         :Accepted
Problem Logic  : cube box value,kom theke beshi dike hoy gravaty value,mane sort korle kaj sesh
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}
