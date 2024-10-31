/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   :A. Exciting Bets
Problem Number :1543A
Difficulty     : 900
Problem Link   :
STATUS         : Accepted
Problem Task   :
a, b এর gcd বের করতে হবে। সর্বাধিক gcd হবে তাদের পার্থক্য।  যদি দুইটি সংখ্যা সমান হয়, তবে 1++ করে 2টিকে বাড়ালে gcd বাড়বে, এর ফলে সর্বাধিক gcd বৃদ্ধি পাবে এবং এটি অসীম হবে, তাই এখানে  gcd শূন্য এবং পদক্ষেপও শূন্য হবে।

অন্যদিকে, আমরা যাচাই করবো যে gcd মানে পার্থক্য বের করে a, b এর ভাগশেষ কতো থাকে। যদি ভাগশেষ সমান হয়, তবে gcd পাওয়া যাবে; অন্যথায় gcd শূন্য এবং পদক্ষেপ শূন্য হবে।

এখন যদি gcd দিয়ে a, b এর ভাগশেষ সমান হয়, তবে আমাদের কাজ হবে সেই মানটি কতো সেটি হিসাব করা।
আমরা চাইলে এই মানটিকে কমাতে পারি, যাতে ভাগশেষ শূন্য পাই, অথবা আমরা এটিকে বাড়িয়ে দিতে পারি যত বাড়ালে এটি gcd এর সমান হয়।

এখন gcd থেকে ভাগশেষ বিয়োগ করে বুঝতে পারবো যে কতটা বাড়ালে এই মান gcd সমান হবে। এরপর আমরা ২টি কাজের জন্য  পদক্ষেপ পাবো:
    ১. একটিকে ভাগশেষ কমিয়ে শূন্য করার জন্য,
    ২. আরেকটি এটিকে বাড়িয়ে gcd এর সমান করার জন্য।

যে পদক্ষেপ কম নিতে হবে এবং সেই অনুযায়ী gcd সর্বাধিক হবে,  তা প্রিন্ট করবো এবং তার আগে gcd দেখাবো।
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;
int  main()
{
    long long t;
    cin >> t;
    while (t -- )
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << ' ' << 0 << '\n';
            continue;
        }
        else
        {
            long long gcd=abs(a-b) ;
            long long  x=a%gcd, y=b%gcd;
            long long mov=min( x,(gcd - x) );
            if (x != y)
            {
                cout << 0 << ' ' << 0 << '\n';
                continue;
            }
           else
        {
          cout<<gcd<<"  "<<mov<<endl;
        }

        }
    }
    return 0;
}
