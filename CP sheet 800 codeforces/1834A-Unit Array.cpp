/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Unit Array
Problem Number : 1834A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1834/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, P = 0, N = 0;
        cin >> n;
        vector<int> a(n); // ভাল মেমরি ব্যবস্থাপনার জন্য ভেক্টর ব্যবহার

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1) N++;
            else P++;
        }

        int ans = 0;

        // মূল লজিক
        while (N > P)
        {
            P++;
            N--;
            ans++;
            /* ধরি, N = 5 এবং P = 3: mane total 8 ta input
            প্রথম ধাপে, N কমে যাবে 4 এবং P বাড়বে 4। ans বৃদ্ধি পাবে 1।
            দ্বিতীয় ধাপে, N কমে যাবে 3 এবং P বাড়বে 5। ans বৃদ্ধি পাবে 2।
            তৃতীয় ধাপে, N কমে যাবে 2 এবং P বাড়বে 6। ans বৃদ্ধি পাবে 3।
            এইভাবে, লুপটি N কে P এর সাথে সামঞ্জস্যপূর্ণ করতে চেষ্টা করে এবং প্রতিটি ধাপে ans বাড়ানো হয়।  */

        }
        // ফলাফল আউটপুট
        if (N % 2 == 0) cout << ans << endl;
        else cout << ans + 1 << endl;
    }
    return 0;
}
