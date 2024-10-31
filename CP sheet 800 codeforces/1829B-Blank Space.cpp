/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Blank Space
Problem Number : 1829A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1829/A
STATUS         : Accepted

Problem Logic  :

**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

        }
        //logic is here
        int max_zero=0,count_zero=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)//0 holei ei jaygay dukbe,,jodi basapari ekta  zero miss hoy tahole else e
            {
                count_zero++;//pasapasi zero hole count zero ++ hocche
                max_zero=max(max_zero,count_zero);/// ekane pasapasoi pawyar por protibar max zero update hobe,,jodi ekbaro pasapasi na pai tahole pore ei loop e dukbe na count o hobe na
            }
            else count_zero=0;/// ekane 0 kora hole karon jodi abr pasapasi pai tahole if theke count barbe than count hobe jodi max er cheye beshi hoy
        }
        cout<<max_zero<<endl;
    }


    return 0;
}
