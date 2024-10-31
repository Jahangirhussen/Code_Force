/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Serval and Mocha's Array
Problem Number : 1789
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1789/A
STATUS         : Accepted
Problem Logic  :a array te ja value takbe eder eder minimum 2 ta value modde gcd 2 ba er kom hote hobe

__gcd(8, 12):
8 এবং 12 এর gcd হচ্ছে 4, কারণ 4 হচ্ছে সেই বৃহত্তম সংখ্যা যা 8 এবং 12 উভয়কেই ভাগ করতে পারে।
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(__gcd(a[i], a[j]) <= 2)///array jekunu 1 ta gcd pailei hobe ja 2 theke chuto
                {
                    found = true;
                    break;
                }
            }
            if(found) break;
        }

        cout << (found ? "Yes" : "No") << '\n';
    }
    return 0;
}
