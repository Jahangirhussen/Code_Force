 /**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Make AP
Problem Number : 1624B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1624/B
STATUS         : Accepted
Problem Task   :
Problem Logic  :
এপিএ হল এমন একটি সংখ্যা সিকোয়েন্স যেখানে ধারাবাহিক দুইটি সংখ্যা পার্থক্য একটি নির্দিষ্ট কনস্ট্যান্ট (ধ্রুবক) দ্বারা সমান হয়।
 অর্থাৎ, যদি a, b, এবং c একটি এপিএ গঠন করে, তাহলে:          b - a = c - b
 এটি যাচাই করার জন্য তিনটি শর্ত রয়েছে:

শর্ত ১:
     a = 2 * b - c
    - যদি (a + c) % (2 * b) == 0 হয়, তাহলে a = 2 * b - c হবে।

 শর্ত ২:
     b = (a + c) / 2
     - যদি (2 * b - a) > 0 এবং (2 * b - a) % c == 0 হয়, তাহলে b = (a + c) / 2 হবে।

 শর্ত ৩:
    c = 2 * b - a
 যদি (2 * b - c) > 0 এবং (2 * b - c) % a == 0 হয়, তাহলে c = 2 * b - a হবে।

**/
#include <bits/stdc++.h>
using namespace std;

void speed_code();

int main() {
    speed_code();

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // চেক করুন যে সংখ্যাগুলো একটি এপিএ গঠন করে কিনা
        bool ans = ((a + c) % (2 * b) == 0 || // শর্ত ১: (a + c) % (2 * b) == 0
                    ((2 * b - a) > 0 && (2 * b - a) % c == 0) || // শর্ত ২: (2 * b - a) > 0 এবং (2 * b - a) % c == 0
                    ((2 * b - c) > 0 && (2 * b - c) % a == 0)); // শর্ত ৩: (2 * b - c) > 0 এবং (2 * b - c) % a == 0

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}

void speed_code() {
    // ইনপুট/আউটপুট অপারেশন দ্রুত করার জন্য
    ios_base::sync_with_stdio(false); // স্ট্রিম দ্রুত করার জন্য
    cin.tie(nullptr); // cin এবং cout আলাদা করুন
    cout.tie(nullptr); // cout কে cin থেকে আলাদা করুন
}
