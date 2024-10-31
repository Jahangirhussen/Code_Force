/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Jellyfish and Undertalek
Problem Number : 1875A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1875/A
STATUS         : Accepted
Problem Logic  :

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        long long a, b, n, x;
        cin >> a >> b >> n;

        long long second = 0;

        while(n--)
        {
            cin >> x;
            second=second + ((x < (a - 1)) ? x : (a - 1));
        }

        cout << second + b << '\n';
    }

    return 0;
}

/*
             Time কখনোই 0 হবে না, কারণ 0 হলে বোমা ব্লাস্ট করবে। তাই প্রতিটি টুলের টাইমার এভাবে যোগ করা হচ্ছে।
             যদি টুলের টাইম x = a হলে, সেটিকে a এর বেশি বাড়ানো যাবে না,
             তাই সর্বাধিক a-1 পর্যন্ত যোগ করা হচ্ছে।
             */
