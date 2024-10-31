/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Chemistry
Problem Number : 1883B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1883/B
STATUS         : Accepted
Problem Logic  :
যদি odd সংখ্যার অক্ষরগুলো হয়, তবে সবগুলো অপসারণ করে বাকি even সংখ্যার অক্ষরগুলো ২ সাইজে বিভক্ত করে পরিকল্পনা করতে হবে।
অথবা, সব odd সংখ্যার অক্ষর অপসারণ করে একটি odd সংখ্যার অক্ষর রেখে, সেটিকে মাঝখানে রেখে বাকি অক্ষরগুলো ২ সাইজে বিভক্ত করে পরিকল্পনা করতে হবে
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> char_count;

        for (char i : s)
        {
            char_count[i]++;
        }

        int odd_char = 0;
        for (auto& i : char_count)
        {
            if (i.second % 2 != 0)
                odd_char++;
        }

        if (odd_char - k <= 1)/// k ta remove lorte parbo,odd jodi k hoy remove kore dibo,otoba ekta odd mane reke dileo plandom hobe tai <= hobe
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
