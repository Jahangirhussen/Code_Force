/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Luntik and Subsequences
Problem Number : 1582B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1582/B
STATUS         : Accepted
Problem Task   :
    একটি সিকোয়েন্স দেওয়া হয়েছে, যার দৈর্ঘ্য n। প্রতিটি টেস্ট কেসে n সংখ্যক উপাদান থাকবে।
    আপনার কাজ হলো বিটওয়াইজ AND অপারেশন ব্যবহার করে সিকোয়েন্সের সর্বনিম্ন মান বের করা।
    প্রতিটি টেস্ট কেসের জন্য, অ্যারের উপাদানগুলির বিটওয়াইজ AND অপারেশন প্রয়োগ করুন এবং
    পরিবর্তিত অ্যারের সর্বনিম্ন মান আউটপুট করুন।

Problem Logic   :
    1. প্রথমে n সংখ্যা ইনপুট নিন, যা সিকোয়েন্সের দৈর্ঘ্য নির্দেশ করে।
    2. n সংখ্যক উপাদান নিয়ে একটি অ্যারে `arr` তৈরি করুন এবং সেগুলি ইনপুট নিন।
    3. `ans` ভেরিয়েবলে প্রথম উপাদান `a[0]` সংরক্ষণ করুন।
    4. একটি লুপের মাধ্যমে, `ans` এর সাথে প্রতিটি পরবর্তী উপাদানের বিটওয়াইজ AND অপারেশন সম্পন্ন করুন।
    5. শেষের দিকে, `ans` এর মান আউটপুট করুন, যা সমস্ত উপাদানের বিটওয়াইজ AND এর চূড়ান্ত ফলাফল হিসাবে কাজ করে।
**/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // বিটওয়াইজ AND অপারেশন সম্পন্ন করা
        int ans = a[0];
        for(int i = 1; i < n; i++)
        {
            ans = ans & a[i];
        }

        cout << ans << endl; // চূড়ান্ত ফলাফল আউটপুট
    }

    return 0;
}
