/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Business trip
Problem Number : 149A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/149/A
STATUS         : Accepted
Problem Logic  :proti mas a koto inchi lomba hoy dewya,,amr cheek korte hobe k inchil lomba hote koy mash pani dite hobe,max je mase lomba oi mash gula dile somoy save kora jabe setao lokko rate hobe
**/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,c=-1,sum=0;
    cin>>k;
    int a[12];
    for(int i=0; i<12; i++)
    {
        cin>>a[i];
    }
    sort(a,a+12,greater<int>() );

    for(int i=0; i<12 ; i++)
    {
        if(k==0)
        {
            c=0;
            break;

        }

        sum=sum+a[i];

        if(sum>=k)
        {

            c=i+1;
            break;

        }



    }

    cout<<c<<endl;


return 0;
}
