/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. I_love_%username%
Problem Number :255A
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/155/A
STATUS         :Accepted
Problem Logic  :best er cheyeu best paile best count,,,karap er cheye karap paile karap count
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,count=0;
        cin>>n;


        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
 int worst=a[0],best=a[0];
        for(int i=1; i<n; i++)
        {

            if(a[i]> best)
            {
                count++ ;
                best=a[i];
            }
            if (a[i]<worst)
            {
                count++;
                worst=a[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

