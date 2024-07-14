/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Fireworks
Problem Number :1945B
Difficulty     :900
Problem Link   :https://codeforces.com/problemset/problem/1945/B
STATUS         :Accepted
Problem Logic  :
#a min por por ekta kore bati jole ,ekekta bati #m min thake___m min er bitor total koyta a min wala bati jolbe seta
#b min por por ekta kore bati jole ,ekekta bati #m min thake___m min er bitor total koyta b min wala bati jolbe seta
a and b er jukfol and zero ba shurute 2 tar ek ek kore 2ta bati jole,,sob jola batir jukfol is ans
**/

#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,m;
        cin>>a>>b>>m;
    cout<<(m/a)+(m/b)+2<<endl;

    }
    return 0;
}
