/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Drinks
Problem Number :200B
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/200/B
STATUS         :Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = (cin >> n, n);
    int p[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }
cout<<sum/n<<endl;

    return 0;
}
