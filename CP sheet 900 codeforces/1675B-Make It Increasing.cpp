/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : B. Make It Increasing
Problem Number : 1675B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1675/B
STATUS         : Accepted
Problem task :You need to modify an array so that each number is smaller than the next number.You can only reduce a number by dividing it by 2.
Find out how many times you need to divide the numbers to make the array strictly increasing.Print -1 if it's not possible.

Logic:
Start from the end of the array and move towards the beginning.
If a number is not smaller than the next number, divide it by 2 until it becomes smaller.
Count the total number of divisions.
If the array becomes strictly increasing, print the number of divisions; otherwise, print -1.
**/
#include<bits/stdc++.h>
using namespace std;
void code_speed();

int main()
{
    code_speed();
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool zero = true;  // renamed for clarity
        for(int i = n - 1; i > 0; i--)
        {
            while(a[i] <= a[i-1])
            {
                if(a[i-1] == 0)
                {
                    zero = false;/// it's not possible to maintain the order if 0 is present.
                    break;
                }
                a[i-1] /= 2;
                ans++;
            }
            if(!zero) break;
        }

        cout << (zero && is_sorted(a.begin(), a.end()) ? ans : -1) << endl;
    }
    return 0;
}

void code_speed()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
