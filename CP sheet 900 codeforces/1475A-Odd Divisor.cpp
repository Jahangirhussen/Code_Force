/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   :A. Odd Divisor
Problem Number :1475A
Difficulty     : 900
Problem Link   :https://codeforces.com/problemset/problem/1475/A
STATUS         : Accepted
Problem Logic  :
আপনাকে একটি পূর্ণসংখ্যা n দেওয়া হবে। আপনাকে পরীক্ষা করতে হবে যে n-এর একটি বিজোড় বিভাজক (greater than one) আছে কিনা।
অর্থাৎ, এমন একটি সংখ্যা x (x > 1) রয়েছে কিনা যা n দ্বারা বিভাজ্য এবং x বিজোড়।
যদি n বিজোড় হয়, তাহলে তার একটি বিজোড় বিভাজক রয়েছে, তাই "YES" আউটপুট হবে।
যদি n জোড় হয়, তবে আপনি n কে 2 দিয়ে ভাগ করতে থাকবেন যতক্ষণ না এটি বিজোড় হয়।
যদি অবশেষে n > 1 থাকে, তবে "YES" আউটপুট হবে, অন্যথায় "NO"।
Problem Task   :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            while (n % 2 == 0)
            {
                n /= 2;
            }

            cout << (n > 1 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
