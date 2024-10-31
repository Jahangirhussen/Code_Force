/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Longest Divisors Interval
Problem Number : 1855B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1855/B
STATUS         : Accepted
Problem Logic  :
- এই সমস্যায় একটি সংখ্যা `n` দেওয়া হয়েছে, এবং আমাদের কাজ হল দেখতে হবে কতগুলো ধারাবাহিক পূর্ণসংখ্যা `1` থেকে শুরু করে `n` পর্যন্ত এমন যে সব গুণক হিসেবে গণ্য হয়।
- প্রতিটি টেস্ট কেসের জন্য:
  - একটি সংখ্যা `n` ইনপুট হিসেবে নেয়া হয়।
  - কাউন্টার `ans` কে 1 দিয়ে শুরু করা হয় কারণ `1` সবসময় `n` এর গুণক।
  - একটি লুপ চালানো হয় যেখানে `i` থেকে শুরু হয় 2 দিয়ে।
  - প্রতিটি ইটারেশনে, চেক করা হয় যে `i` একটি গুণক কিনা (অর্থাৎ, `n % i == 0`)।
  - যদি `i` একটি গুণক হয় এবং `i` এর মান `n` এর চেয়ে ছোট বা সমান থাকে, তবে `ans` বাড়ানো হয়।
  - লুপ শেষ হলে, `ans` প্রিন্ট করা হয় যা `n` এর ধারাবাহিক গুণকের সংখ্যা প্রদর্শন করে।
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long ans = 1;
        for(int i = 2;( n % i == 0 && i <= n);i++)
        {
           ans++;        }
        cout << ans << "\n";
    }

    return 0;
}
