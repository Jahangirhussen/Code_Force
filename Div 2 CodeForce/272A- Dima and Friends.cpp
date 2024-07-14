/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A.  Dima and Friends
Problem Number : 272A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/272/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,total_friends_finger=0,dima_finger=0;
    cin>>n;
    for(int i=1; i<=n; i++) ///for loop diye nithe hoy,while diye nile n-- e loop sesh e n=0 hoye jabe
    {
        int f;
        cin>>f;
        total_friends_finger=total_friends_finger+f;
    }
    int x=n+1;//karon dima nije nijer frnd na but seo o kelbe
    for(int i=1; i<=5; i++) // 5 karon angul 5 ta hote pare ,i mane dima koyta angul dite pare
    {
        if((total_friends_finger +i)%x !=1 )///i finger diye bag_sesh 1 hole dima upor pore jay,but se room clean korte chay na,
        {
            dima_finger++;
        }
    }
    cout<<dima_finger<<endl;
    return 0;
}
