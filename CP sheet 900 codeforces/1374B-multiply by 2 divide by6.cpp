/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   :B. Multiply by 2, divide by 6
Problem Number :1374B
Difficulty     : 900
Problem Link   :https://codeforces.com/problemset/problem/1374/B
STATUS         : Accepted
Problem Logic  :
Problem Task   :
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n, move=0;
        cin>>n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n= n/6;
                move++;
            }
           else if (n % 3 == 0) // যদি ৬ দিয়ে ভাগ করা না যায়, তবে ৩ দিয়ে গুণ করা যায় কি না
            {
                n = n * 2;
                move++;
            }
            else
            {
                move = -1;
                break;
            }
        }
        cout<<move<<endl;
    }

    return 0;
}


