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

Problem Logic  :
এই সমস্যায়, Luntik একটি অ্যারার সাবসিকোয়েন্সের সংখ্যা বের করতে চায় যেগুলোর যোগফল মোট যোগফল থেকে ১ কম।
অ্যারের মধ্যে ০ এবং ১ এর সংখ্যা গুনে এদের সাথে গাণিতিক হিসাব করে আমরা সাবসিকোয়েন্স গঠন করতে পারি।

উদাহরণ: ধরুন আমাদের ইনপুট হল `4400112310`
- এখানে অ্যারের সংখ্যা হবে: 4, 4, 0, 0, 1, 1, 2, 3, 1, 0
- মোট যোগফল \(s = 4 + 4 + 0 + 0 + 1 + 1 + 2 + 3 + 1 + 0 = 16\)

এখন, প্রায় পূর্ণ সাবসিকোয়েন্সের জন্য, আমাদের দেখা উচিত যে ১ এর সংখ্যা এবং ০ এর সংখ্যা কতটা।
- ১ এর সংখ্যা \(one = 3\)
- ০ এর সংখ্যা \(zero = 4\)

এখন আমরা গাণিতিকভাবে সাবসিকোয়েন্সের সংখ্যা বের করবো:
- প্রায় পূর্ণ সাবসিকোয়েন্সের সংখ্যা হবে:
\[ \text{সাবসিকোয়েন্স সংখ্যা} = (১ এর সংখ্যা) \times (২^{০ এর সংখ্যা}) \]
\[ = 3 \times (2^4) = 3 \times 16 = 48 \]

তাহলে, আমাদের এই উদাহরণের জন্য প্রায় পূর্ণ সাবসিকোয়েন্সের সংখ্যা হবে 48।

Problem Task   :
প্রথমে একটি পূর্ণসংখ্যা \(t\) (টেস্ট কেসের সংখ্যা) দেওয়া হবে।
প্রতিটি টেস্ট কেসের জন্য, প্রথম লাইনে একটি পূর্ণসংখ্যা \(n\) (অ্যারের আকার) এবং দ্বিতীয় লাইনে \(n\)টি পূর্ণসংখ্যা \(a_1, a_2, \ldots, a_n\) দেওয়া থাকবে।
আমাদের লক্ষ্য হলো প্রতিটি টেস্ট কেসের জন্য প্রায় পূর্ণ সাবসিকোয়েন্সের সংখ্যা বের করা।
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, one = 0, zero = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one++;
            }
            if (a[i] == 0)
            {
                zero++;
            }
        }
        // pow(2, zero) ব্যবহার করা হচ্ছে এখানে
        cout << one * (long long)pow(2, zero) << endl;
    }

    return 0;
}
