/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Strange Partition
Problem Number : 1471A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1471/A
STATUS         : Accepted
Problem Logic  :
 যেখানে প্রতিটি সংখ্যাকে k দ্বারা ভাগ করে (ভাগ শেষ হলে পরবর্তী মান ধরতে হবে) তাদের সবের যোগফল বের করতে হবে।
সব সংখ্যা একসাথে যোগ করে k দ্বারা ভাগ করতে হবে (ভাগ শেষ হলে পরবর্তী মান ধরতে হবে)।
Problem Task   :
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long sum = 0, max_ans = 0;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            max_ans += (a[i] / k) + (a[i] % k != 0);
        }

        long long min_ans = (sum / k) + (sum % k != 0);


        cout << min_ans << " " << max_ans << endl;
    }

    return 0;
}
