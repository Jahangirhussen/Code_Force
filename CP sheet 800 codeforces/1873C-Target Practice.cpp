/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : C. Target Practice
Problem Number : 1873C
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1873/A
STATUS         : Accepted
Problem Logic  :
**/
#include"bits/stdc++.h"
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int point=0;
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin>>s;

            for (int j = 0; j < 10; j++)
            {
                if(s[j] == 'X')
                {
                    if(i == 0 || i == 9 || j == 0 || j == 9) point+=1;
                    else if(i == 1 || i == 8 || j == 1 || j == 8) point+=2;
                    else if(i == 2 || i == 7 || j == 2 || j == 7) point+=3;
                    else if(i == 3 || i == 6 || j == 3 || j == 6) point+=4;
                    else if(i == 4 || i == 5 || j == 4 || j == 5) point+=5;
                }
            }
        }
        cout<<point<<endl;





    }

    return 0;
}

