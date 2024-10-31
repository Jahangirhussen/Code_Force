/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Everybody Likes Good Arrays!
Problem Number : 1777A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1777/A
STATUS         : Accepted
Problem Logic  :parity binno hote hobe,,baki bekka niche ache
**/#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long cnt = 0;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] =a[i] % 2;/// 0 even ,1 odd,,ekane boro size er somgka count loop er jnno chuto kora hocche,amader dorkar even odd number that why
        }

        //main logic is here !
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i - 1]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
/**
টেস্ট কেস 1:
ইনপুট: 1 7 11 2 13

প্রতিটি উপাদানকে % 2 করা হলে:

1 % 2 = 1 (Odd)
7 % 2 = 1 (Odd)
11 % 2 = 1 (Odd)
2 % 2 = 0 (Even)
13 % 2 = 1 (Odd)
নতুন অ্যারে: 1 1 1 0 1

সংলগ্ন উপাদানের মধ্যে যখন চেক করা হলো:

1 এবং 1 → একই (Odd) → 1 বার অপারেশন
1 এবং 1 → একই (Odd) → 1 বার অপারেশন
1 এবং 0 → আলাদা (Odd এবং Even) → অপারেশন নেই
0 এবং 1 → আলাদা (Even এবং Odd) → অপারেশন নেই
ফলাফল: মোট ২ বার অপারেশন দরকার হবে।

টেস্ট কেস 2:
ইনপুট: 1 2 3 4

প্রতিটি উপাদানকে % 2 করা হলে:

1 % 2 = 1 (Odd)
2 % 2 = 0 (Even)
3 % 2 = 1 (Odd)
4 % 2 = 0 (Even)
নতুন অ্যারে: 1 0 1 0

সংলগ্ন উপাদানের মধ্যে যখন চেক করা হলো:

1 এবং 0 → আলাদা (Odd এবং Even) → অপারেশন নেই
0 এবং 1 → আলাদা (Even এবং Odd) → অপারেশন নেই
1 এবং 0 → আলাদা (Odd এবং Even) → অপারেশন নেই
ফলাফল: ০ বার অপারেশন দরকার হবে।

টেস্ট কেস 3:
ইনপুট: 1 1 1 2 2 3

প্রতিটি উপাদানকে % 2 করা হলে:

1 % 2 = 1 (Odd)
1 % 2 = 1 (Odd)
1 % 2 = 1 (Odd)
2 % 2 = 0 (Even)
2 % 2 = 0 (Even)
3 % 2 = 1 (Odd)
নতুন অ্যারে: 1 1 1 0 0 1

সংলগ্ন উপাদানের মধ্যে যখন চেক করা হলো:

1 এবং 1 → একই (Odd) → 1 বার অপারেশন
1 এবং 1 → একই (Odd) → 1 বার অপারেশন
1 এবং 0 → আলাদা (Odd এবং Even) → অপারেশন নেই
0 এবং 0 → একই (Even) → 1 বার অপারেশন
0 এবং 1 → আলাদা (Even এবং Odd) → অপারেশন নেই
ফলাফল: মোট ৩ বার অপারেশন দরকার হবে।
*/

