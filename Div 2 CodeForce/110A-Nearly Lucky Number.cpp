/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. nearly lucky number
Problem Number :110A
Difficulty     :div 2
Problem Link   :https://codeforces.com/problemset/problem/110/A
STATUS         :Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{

        long long n,count=0;
        cin >> n;
        string s = to_string(n);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '7' || s[i] == '4') // Changed || to &&
            {
                count++;
            }
        }

        if(count==4 || count==7)cout <<"YES" << endl;
        else cout<<"NO"<<endl;


    return 0;
}


