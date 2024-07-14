/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Soft Drinking
Problem Number : 151A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/151/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;

    int total_drink=(k*l);///ek butol 4 liter dorle ,5 butol a 20 liter


    int total_drink_per_slice=total_drink/nl; ///3 liter e ek toast banate parbo ,20 liter a 6 liter hobe

    int total_slice = c *d ;///1 lebu 1 ta bag,20 tay 80 bag hobe
    int total_salt_per_toast =p/np ;///1 toast banaite lage 1 solt,100 salt a 100salt,,___1 toast banaite jodi 2 ta lobon lage ,tahole 100 ta lobon a 50 toast hobe
    /**
    amra maximum koyta toast drink banaite parbo?
    amra 100 banaite chailam but lobon 20 ta ace,so lobon chara baki 80 ta hobe na,,
    abr lobon ace but lebu kom tao hobe na,,
    so amader minimum ja ace seta nite hobe,
    */
    int total_toast =min({total_drink_per_slice,total_slice,total_salt_per_toast});

    int equal_toast_get=total_toast/n;

    cout<<equal_toast_get<<endl;

    return 0;
}

