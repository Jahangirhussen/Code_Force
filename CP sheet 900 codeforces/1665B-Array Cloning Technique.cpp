/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Array Cloning Technique
Problem Number : 1665B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1665/B
STATUS         : Accepted
Problem Task   :
    - যেকোনো একটি উপাদান নির্বাচন করুন এবং সেটির ক্লোন তৈরি করুন, যা  value swap ore old অ্যারেতে যোগ হবে।
    আপনার লক্ষ্য হলো কমপক্ষে সংখ্যক অপারেশন করে সব উপাদানকে সমান করা।
Problem Logic  :
    1. অ্যারের প্রতিটি উপাদানের ফ্রিকোয়েন্সি গণনা করুন।
    2. যে উপাদানের ফ্রিকোয়েন্সি সর্বাধিক (অর্থাৎ সবচেয়ে বেশি বার আসে), সেটি খুঁজুন।
    3. সব উপাদানকে সমান করার জন্য, এমন অপারেশন সম্পাদন করতে হবে যতক্ষণ না সব উপাদানের ফ্রিকোয়েন্সি সর্বাধিক ফ্রিকোয়েন্সির সমান হয়।
    4. প্রতিটি অপারেশনে, বর্তমান সর্বাধিক ফ্রিকোয়েন্সি সমান সংখ্যক ক্লোন যোগ করা যায়।
    5. মোট অপারেশনের সংখ্যা নিম্নরূপ হিসাব করা হয়:
       - প্রতিটি অপারেশনে যোগ করা ক্লোনের সংখ্যা দিয়ে সবচেয়ে বেশি ফ্রিকোয়েন্সির উপাদানের ফ্রিকোয়েন্সি বৃদ্ধি করুন।
       - সব উপাদানকে সমান করতে প্রয়োজনীয় মোট অপারেশনের সংখ্যা হিসাব করুন।
**/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        int max_freq = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
            max_freq = max(max_freq, freq[a[i]]);
        }

        int min_operation = 0;

        while (max_freq < n) // যতক্ষণ না সব সংখ্যা সমান হয়
        {
            int rem = n - max_freq; // মোট সংখ্যা - সর্বাধিক ফ্রিকোয়েন্সি
            int can_add = max_freq; // কতগুলো সংখ্যা আমরা নতুন করে যোগ করতে পারি
            min_operation++; // ক্লোন অপারেশন হিসেব করতে
            min_operation += min(can_add, rem); // কতগুলো নতুন সংখ্যা যোগ করতে পারবো এবং কতটা বাকি আছে
            max_freq += min(can_add, rem); // সর্বাধিক ফ্রিকোয়েন্সি আপডেট করা হবে, যতক্ষণ না সব সংখ্যা সমান হয়
        }

        cout << min_operation << endl;
    }

    return 0;
}
