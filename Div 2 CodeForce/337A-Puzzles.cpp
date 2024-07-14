/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Puzzles
Problem Number : 337A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/337/A
STATUS         : Accepted
Problem Logic  :
4 6
10 12 10 7 5 22


sort korle 5 7 10     10 12 22
প্রথম n টি পাজলের মধ্যে, সবচেয়ে বড় পাজলের পিস সংখ্যা A এবং সবচেয়ে ছোট পাজলের পিস সংখ্যা B এর মধ্যে পার্থক্য সর্বনিম্ন হতে হবে।
এই পার্থক্যটি হলো আউটপুট। শিক্ষার্থীদের জন্য, প্রতিটি পাজলের পিস সংখ্যার মধ্যে এই পার্থক্যটি সবচেয়ে কম হতে হবে, যা তাদের প্রদান করা হবে এমন সেটি নbitore,

**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];

    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
        sort(a, a + m);

    int min_different_of = a[n-1] - a[0]; // Use a[n-1] instead of a[n]

    for (int i = 1; i <= m - n; ++i)
    {
        // Adjust the loop condition
        if (a[i + n - 1] - a[i] < min_different_of)
        {
            min_different_of = a[i + n - 1] - a[i];

        }
    }

    cout << min_different_of << endl;

    return 0;
}

