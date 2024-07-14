/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : B. Present from Lena
Problem Number : 118B
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/118/B
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int s = 0; s < (n - i); s++) cout << "  "; // স্পেস প্রিন্ট

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i) cout << " "; // এখানে অতিরিক্ত স্পেস এড়ানো হয়েছে
        }
        if (i > 0) cout << " "; // এখানে মাঝখানে স্পেস যোগ করা হয়েছে
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0) cout << " "; // এখানে অতিরিক্ত স্পেস এড়ানো হয়েছে
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int s = 0; s < (n - i); s++) cout << "  "; // স্পেস প্রিন্ট

        for (int j = 0; j <= i; j++)
        {
            cout << j;
            if (j != i) cout << " "; // এখানে অতিরিক্ত স্পেস এড়ানো হয়েছে
        }
        if (i > 0) cout << " "; // এখানে মাঝখানে স্পেস যোগ করা হয়েছে
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0) cout << " "; // এখানে অতিরিক্ত স্পেস এড়ানো হয়েছে
        }
        cout << endl;
    }

    return 0;
}
