/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Make it Divisible by 25
Problem Number : 1593B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1593/B
STATUS         : Accepted
Problem Logic  : আমাদের একটি সংখ্যা দেওয়া হয়েছে এবং আমাদের তা থেকে কিছু সংখ্যা বাদ দিতে হবে যাতে আমরা একটি সংখ্যা পাই যা 25 দ্বারা বিভাজ্য।
25 দ্বারা বিভাজ্য সংখ্যা 00, 25, 50, 75 হতে পারে। আমাদের এই সংখ্যা পাওয়ার জন্য যে সংখ্যাগুলো বাদ দিতে হবে, তার সংখ্যা বের করতে হবে।

Problem Task   :
2. সংখ্যাটিকে উল্টো করুন।
3. উল্টো করা সংখ্যার মধ্যে '50,25,100' 75এর জন্য চেক করুন।
4. প্রয়োজনে '0' এবং '5' সংখ্যা দিয়ে সংখ্যা তৈরি করুন।
5. কমপক্ষে সংখ্যক অপারেশন প্রয়োজন হয় সেটি নির্ণয় করুন।
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());

        int check_100 = 1e9, check_5 = 1e9, check_50 = 1e9;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                for(int j = i + 1; j < s.size(); j++)
                {
                    if(s[j] == '0') check_100 = min(check_100, j - 1);
                    else if(s[j] == '5') check_50 = min(check_50, j - 1);

                    if(check_100 != 1e9 || check_50 != 1e9) break;
                }
            }
            else if(s[i] == '5')
            {
                for(int j = i; j < s.size(); j++)
                {
                    if(s[j] == '2' || s[j] == '7') check_5 = min(check_5, j - 1);
                    if(check_5 != 1e9) break;
                }
            }
        }

        cout << min({check_100, check_5, check_50}) << '\n';
    }

    return 0;
}
