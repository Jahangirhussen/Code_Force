/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.One and Two
Problem Number : 1788A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1788/A
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
        int num[n];
        int total_twos = 0;

        // Input and count the number of 2s
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] == 2)
            {
                total_twos++;
            }
        }

        int left_twos = 0;
        int div_index = -1;

        // Find the smallest i where the number of 2s on the left and right are equal
        for (int i = 0; i < n; i++)
        {
            if (num[i] == 2)
            {
                left_twos++;
            }
            if (left_twos * 2 == total_twos)///lft 2 r total 2  zero hole  bitore full zero=zero that true so
            {
                div_index = i + 1;///old div nai,direct new div update
                break;
            }
        }

        cout << div_index << endl;
    }
    return 0;
}
