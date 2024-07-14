/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Lights Out
Problem Number :275A
Difficulty     :
Problem Link   :https://codeforces.com/problemset/problem/275/A
STATUS         :Accepted
Problem Logic  : je light e chap dibo tar upor nich dan bame o chap porbe
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3] = {}; // শূন্য দিয়ে 3x3 ম্যাট্রিক্স তৈরি করা হচ্ছে, যেখানে ডাটা স্টোর হবে

    // ইনপুট নেয়া হচ্ছে
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // লজিক অংশ
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // মোটামুটি একটি লজিক চেক করা হচ্ছে, প্রতিটি লাইটের সাইডের লাইটগুলির সংখ্যা যোগ করে
            int logic_check = a[i][j];

            if (i > 0) logic_check += a[i - 1][j]; // উপরের লাইট
            if (i < 2) logic_check += a[i + 1][j]; // নীচের লাইট
            if (j > 0) logic_check += a[i][j - 1]; // বামের লাইট
            if (j < 2) logic_check += a[i][j + 1]; // ডানের লাইট

            // লজিক চেক করে প্রতিটি লাইটের অবস্থা নির্ধারণ করা হচ্ছে
            if (logic_check % 2 == 0)
                cout << 1; // যদি লজিক চেক সত্য হয়
            else
                cout << 0; // যদি লজিক চেক মিথ্যা হয়
        }
        cout << '\n'; // প্রতি লাইনের শেষে লাইন চ্যারেক্টার প্রিন্ট করা হচ্ছে
    }

    return 0;
}
/*
input:

 1 0 1
 8 8 8
 2 0 3

 output:
 010
 011
 100

*/
