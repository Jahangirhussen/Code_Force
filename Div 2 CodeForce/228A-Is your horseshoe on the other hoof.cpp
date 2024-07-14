/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Is your horseshoe on the other hoof?
Problem Number : 228A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/228/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{

long long s[4];
cin>>s[0]>>s[1]>>s[2]>>s[3];


int count=0;
sort(s,s+4);
for(int i=0;i<3;i++)
{
    if(s[i]==s[i+1])count++;

}
cout<<count<<endl;



    return 0;
}

/*
                                                                       // Counting the number of unique colors using unique function
 sort(s, s + 4);                                                     /// sort charara uniques tik moto kaj kore na.
 int count = unique(s, s + 4) - s;                                  // unique value count kore
 cout << 4 - count << endl;                                        /// total value thele unique badh dile doublucate pawa jay


*/
