/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Coin Games
Problem Number :1972B
Difficulty     :900
Problem Link   :https://codeforces.com/problemset/problem/1972/B
STATUS         :Accepted

Problem Logic  : note is a a #circle  and here is 9 index so index 0 is colse (index 8 and index 1)
এই গেমটি নির্দিষ্ট সংখ্যক পদক্ষেপের মধ্যে শেষ হবে এবং যদি উভয় খেলোয়াড়ই সর্বোত্তম কৌশলে খেলে, তবে প্রথম বা দ্বিতীয় খেলোয়াড়ের জয় নির্ভর করবে কয়েনের মোট সংখ্যার উপর 1st or last utano jabe if U hole,je utate parbe na se harbe,sob coin sesh hole je last a porbe se harbe
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int c=0,n;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='U') c++;
    }

    if(c%2==0) cout<<"NO\n";

    else cout<<"YES\n";
}

    return 0;
}

