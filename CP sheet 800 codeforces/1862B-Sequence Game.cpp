/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Sequence Game
Problem Number : 1862B
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1862/B
STATUS         : Accepted
Problem Logic  :Vika-এর তৈরি করা b ক্রমটি শুধুমাত্র সেই উপাদানগুলো রাখে যেখানে আগের উপাদানটি বর্তমান উপাদানের চেয়ে ছোট বা সমান থাকে।
**/
#include"bits/stdc++.h"
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n];
        vector<int>a;
        for (int i = 0; i<n; i++)
        {
            cin>>b[i];
        }
        a.push_back(b[0]);
        for(int i=1; i<n; i++)
        {
            if(b[i]>=b[i-1])a.push_back(b[i]);
            else
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }

        }
        cout<<a.size()<<endl;
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;


    }


    return 0;
}

