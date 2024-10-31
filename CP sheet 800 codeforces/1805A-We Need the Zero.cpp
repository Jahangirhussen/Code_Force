/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.We Need the Zero
Problem Number : 1805A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1805/A
STATUS         : Accepted
Problem Logic  : এখানে x বের করতে হবে। যদি একটি সংখ্যা x এর সাথে সমস্ত a[i] কে XOR করলে b[i] পাওয়া যায়,
                                                   এবং সমস্ত b[i] এর XOR  শূন্য হয়, তাহলে সেই x টি সঠিক।
                                                     যদি এমন x পাওয়া না যায়, তবে x হবে -1।
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            x = x ^ a;
        }

        if (n % 2 == 0)
        {
            cout << (x == 0 ? 0 : -1) << '\n';
        }
        else
        {
            cout << x << '\n';
        }
    }
    return 0;
}
/**
আউটপুট ব্যাখ্যা:

প্রাথমিক XOR: x ^ x = 0 এবং x ^ 0 = x।
কমিউটেটিভ ও অ্যাসোসিয়েটিভ: a ^ b ^ c এর ফলাফল অর্ডার পরিবর্তন করলে একই থাকবে (যেমন, (a ^ b) ^ c = a ^ (b ^ c)).
amader kotha chilo a[i] k xor kora than sob b... k..so  (a[i]^x)) ^  x  == a[i]^ x uporer sutro mote  .ekane b[i]=(a[i]^x))

 x = x ^ a;
প্রথম টেস্ট কেস:

n = 3 এবং a = [1, 2, 5]
x এর মান বের করতে হবে যা a এর সাথে XOR করলে সমস্ত বাকি মানের XOR শূন্য হবে।
XOR অপারেশন:
x = 0 ^ 1 = 1
x = 1 ^ 2 = 3
x = 3 ^ 5 = 6
x = 6 (n বিজোড় সংখ্যা, তাই সরাসরি x প্রিন্ট হবে)
আউটপুট: 6
দ্বিতীয় টেস্ট কেস:

n = 3 এবং a = [1, 2, 3]
XOR অপারেশন:
x = 0 ^ 1 = 1
x = 1 ^ 2 = 3
x = 3 ^ 3 = 0
x = 0 (যেহেতু n বিজোড়, সরাসরি x প্রিন্ট হবে)
আউটপুট: 0
তৃতীয় টেস্ট কেস:

n = 4 এবং a = [0, 1, 2, 3]
XOR অপারেশন:
x = 0 ^ 0 = 0
x = 0 ^ 1 = 1
x = 1 ^ 2 = 3
x = 3 ^ 3 = 0
x = 0 (যেহেতু n জোড় এবং x শূন্য, তাই 0 প্রিন্ট হবে)
আউটপুট: 0
চতুর্থ টেস্ট কেস:

n = 4 এবং a = [1, 2, 2, 3]
XOR অপারেশন:
x = 0 ^ 1 = 1
x = 1 ^ 2 = 3
x = 3 ^ 2 = 1
x = 1 ^ 3 = 2
x = 2 (যেহেতু n জোড় এবং x শূন্য নয়, তাই -1 প্রিন্ট হবে)
আউটপুট: -1
পঞ্চম টেস্ট কেস:

n = 1 এবং a = [1]
XOR অপারেশন:
x = 0 ^ 1 = 1
x = 1 (যেহেতু n বিজোড়, সরাসরি x প্রিন্ট হবে)
আউটপুট: 1
*/
