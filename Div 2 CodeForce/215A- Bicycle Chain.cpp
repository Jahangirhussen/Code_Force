/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A.  Bicycle Chain
Problem Number : 215A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/215/A
STATUS         : Accepted
Problem Logic  :

ইনপুট নেওয়া: প্রথমে পেডাল এক্সেল এবং রিয়ার ওয়িল এক্সেলের স্টারগুলির টিথ সংখ্যা ইনপুট নেওয়া হয়। এটি স্ট্যাটিক ভায়াবলের মাধ্যমে প্রয়োজনীয় তথ্য স্টোর করা হয়।

রেশিও বের করা: প্রতিটি রিয়ার ওয়িল এক্সেলের স্টারের সাথে পেডাল এক্সেলের প্রতিটি স্টারের টিথ সংখ্যা দিয়ে রেশিও বের করা হয়। যদি রেশিওটি পূর্ণসংখ্যার হয়, তবে সেই রেশিওটি একটি ভেক্টরে সংরক্ষিত হয়।

ম্যাক্সিমাম রেশিও এবং তার সংখ্যা গণনা: ভেক্টরের মধ্যে সর্বোচ্চ রেশিওর মান এবং সেই সর্বোচ্চ রেশিওর সংখ্যা কয়েকবার গণিত হয়। এই মান ও সংখ্যার মাধ্যমে দেখা হয় কতগুলি এমন গিয়ার রিশিও পাওয়া গিয়েছে।

আউটপুট প্রিন্ট: পাওয়া গিয়া সর্বোচ্চ রিশিওর সংখ্যা এবং সেই সংখ্যার সম্ভাব্য প্রকাশ দেওয়া হয়।র হয় তবে সেটি ভেক্টরে সংরক্ষিত হয়। সবশেষে, ভেক্টরের মধ্যে সর্বোচ্চ রেশিও এর সংখ্যা ও সর্বোচ্চ রেশিও যতবার কয়েন্ট তা বের করে প্রিন্ট করা হয়।



রিশিও বুঝতে গিয়ে ব্যবহৃত হয়েছে "গিয়ার রিশিও" এবং এটি হলো দুটি স্টারের টীথ সংখ্যার মধ্যে সম্পর্ক যার মাধ্যমে গিয়ারটির চালিত হওয়া সুবিধা নির্ধারিত হয়।
পেডাল এক্সেল এবং রিয়ার ওয়িল এক্সেলের স্টারগুলির টিথ সংখ্যার ভাগফল হলো গিয়ার রিশিও। এই রিশিও যদি পূর্ণসংখ্যার হয়, তাহলে সেই রিশিওটি হিসাবে গন্য হয়।

**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m; // পেডাল এক্সেলে থাকা স্টারগুলির সংখ্যা ইনপুট নেওয়া হচ্ছে
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i]; // পেডাল এক্সেলের স্টারগুলির টিথ সংখ্যা ইনপুট নেওয়া হচ্ছে
    }

    cin >> n; // রিয়ার ওয়িল এক্সেলে থাকা স্টারগুলির সংখ্যা ইনপুট নেওয়া হচ্ছে
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i]; // রিয়ার ওয়িল এক্সেলের স্টারগুলির টিথ সংখ্যা ইনপুট নেওয়া হচ্ছে
    }

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i] % a[j] == 0) // যদি রিয়ার ওয়িল এক্সেলের স্টারগুলির টিথ সংখ্যা a[j] দ্বারা বিভাজ্য হয়
                v.push_back(b[i] / a[j]); // তবে ভেক্টর v তে গিয়ের রেশিও যুক্ত করা হচ্ছে
        }
    }

    int mx = *max_element(v.begin(), v.end()); // ভেক্টর v এর মধ্যে সর্বোচ্চ রেশিও এর মান বের করা হচ্ছে
    int c = count(v.begin(), v.end(), mx); // ভেক্টর v এর মধ্যে সর্বোচ্চ রেশিও এর সংখ্যা গণনা করা হচ্ছে

    cout << c << endl; // ম্যাক্সিমাম রেশিও সংখ্যার যোগফল প্রিন্ট করা হচ্ছে
    return 0;
}
