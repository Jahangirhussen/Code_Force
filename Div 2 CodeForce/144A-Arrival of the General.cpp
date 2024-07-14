/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :
Problem Number :
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/80/A
STATUS         :Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, time = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxIndex = 0, minIndex = 0;

    // Find max and min indices
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
        if (a[i] <= a[minIndex]) {  // Use <= to get the last minimum
            minIndex = i;
        }
    }

    /*
    max_index থেকে 0 তম ইনডেক্সে যেতে যে দূরত্ব লাগে,
    এবং min_index থেকে (n-1) ইনডেক্সে যেতে যে দূরত্ব লাগে।
    যদি max_index এর পরে min_index থাকে,
    তাহলে একটি স্ব্যাপ কম লাগবে কারণ সর্বাধিক মান সরে গেলে সর্বনিম্ন মান এক ধাপ বাম দিকে সরে আসবে।
    */
    // Calculate swaps needed
    time = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        time--;
    }

    cout << time << endl;
    return 0;
}
