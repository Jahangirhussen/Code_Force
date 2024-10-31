
/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Ambitious Kid
Problem Number : 1866A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1866/A
STATUS         : Accepted
Problem Logic  :n erray all element er gun fol just zero korte hobe ,tobe amra ek add or ek komaite parbo,eketre minimum koto opretion lagbe,,so amra jodi sort kori ..than zero kache je ace thake komaia dei or bariyer zero kori tahole gun fol zero hobe
**/
#include"bits/stdc++.h"
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0) a[i]=-a[i];


    }

sort(a,a+n);
cout<<a[0]<<endl;




    return 0;
}
