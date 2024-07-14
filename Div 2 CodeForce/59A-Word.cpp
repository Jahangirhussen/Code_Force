/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Word
Problem Number :59A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/59/A
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int upper=0,lower=0;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if(s[i]>=65 &&s[i]<=90 ) upper++;///ViP
        else lower++;
    }
    if(upper>lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }

    return 0;
}



