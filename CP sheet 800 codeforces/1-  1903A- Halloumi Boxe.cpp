/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Halloumi Boxes
Problem Number :1903A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1903/A
STATUS         :Accepted
Problem Logic  :reversert sort korte amder minimum 2 ta for loop lahbe,buble sort r ,
jodi ekta hoy tahole sort sombob nas,,but age theke sort takle ekta diye sort kora sombob,else not
k=1 mane eta jodi sort na take tahole ,ekbar sort function rever korbe but ekbare sort hoy na ,so outout no
k>1 hole 2 bar holeoi sort hoye jay baki time lage na ,so yes
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i] ;
    }

    if(k==1 &&  !is_sorted(a, a+n))cout<<"NO\n";
    else cout<<"YES\n";
}
    return 0;
}

