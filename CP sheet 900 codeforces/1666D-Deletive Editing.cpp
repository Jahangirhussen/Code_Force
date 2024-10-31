/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : D. Deletive Editing
Problem Number : 1666D
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1666/D
STATUS         : Accepted
Problem Task   :দুইটি স্ট্রিং `s` এবং `t` দেওয়া হয়েছে, নির্ধারণ করুন `t` কি `s` থেকে কিছু চরিত্র মুছে (বাকি চরিত্রগুলির ক্রম না বদলে) প্রাপ্ত করা যেতে পারে কিনা।

Problem Logic  :- প্রতি টেস্ট কেসের জন্য, `t` তে প্রতিটি চরিত্রের ফ্রিকোয়েন্সি গণনা করতে একটি ম্যাপ ব্যবহার করুন।
- `s` কে শেষ থেকে শুরু করে ট্রাভার্স করুন এবং ফ্রিকোয়েন্সি ম্যাপ অনুযায়ী চরিত্রগুলো সংগ্রহ করুন।
- সংগ্রহ করা স্ট্রিং `temp` কে রিভার্স করুন এবং চেক করুন এটি `t` এর সাথে মেলে কিনা।

**/
#include <bits/stdc++.h>
using namespace std;

void speed_code();

int main()
{
    speed_code();
    int n;
    cin >> n;
    while (n--)
    {
        map<char, int> freq; // চরিত্রের ফ্রিকোয়েন্সি ম্যাপ
        string s, t, temp = "";
        cin >> s >> t;

        // t তে প্রতিটি চরিত্রের ফ্রিকোয়েন্সি গননা করা
        for (char c : t)
            freq[c]++;

        // s কে শেষ থেকে শুরু করে traverse করে temp তৈরি করা
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (freq[s[i]] > 0) // চেক করে দেখছে চরিত্রটি t তে আছে কিনা
            {
                temp += s[i]; // temp তে চরিত্রটি যোগ করা
                freq[s[i]]--; // চরিত্রটির গননা কমানো
            }
        }

        // temp কে সঠিকভাবে তুলনা করার জন্য reverse করা
        reverse(temp.begin(), temp.end());

        if (temp == t) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

void speed_code()
{
    ios_base::sync_with_stdio(false); // দ্রুত ইনপুট/আউটপুট সেটআপ
    cin.tie(nullptr); // cin কে cout এর সাথে বাঁধা মুক্ত করা
    cout.tie(nullptr); // cout কে cin এর সাথে বাঁধা মুক্ত করা
}
