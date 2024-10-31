/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. NIT Destroys the Universe
Problem Number : 1696B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1696/B
STATUS         : Accepted
Problem Task   : একটি সংখ্যা অ্যারে দেওয়া হয়েছে। আপনাকে কমপক্ষে কতটি অপারেশন প্রয়োজন তা নির্ধারণ করতে হবে যাতে সমস্ত উপাদান শূন্য হয়ে যায়। প্রতিটি অপারেশন একটি সমন্বিত সাবঅ্যারে নির্বাচন করে এবং তার সমস্ত উপাদানকে উপসেটের মধ্যে উপস্থিত না থাকা ক্ষুদ্রতম অ-ঋণাত্মক পূর্ণসংখ্যায় সেট করা হয়।

Problem Logic  :
- যে সংখ্যার টুকরোগুলি  ধনাত্মক সংখ্যার একটি ধারাবাহিক অংশ তৈরি করে, সেগুলি গননা করতে হবে।
- প্রতি টুকরোকে শূন্যে পরিণত করতে এক বা একাধিক অপারেশন প্রয়োজন হতে পারে।
- সর্বাধিক ২টি অপারেশন যথেষ্ট, কারণ সব সংখ্যাকে শূন্যে পরিণত করার জন্য ২টি অপারেশন ব্যবহার করা সম্ভব।

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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int segment = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                while (  (i  < n )  && (a[i + 1] > 0)   )
                {
                    i++;
                }
                segment++;
            }
        }

        cout << min(segment, 2) << endl;
    }
}
