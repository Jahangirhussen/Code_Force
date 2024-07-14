/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. k-String
Problem Number : 219A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/219/A
STATUS         : Accepted
Problem Logic  : The program checks if the given string can be partitioned into k-strings where each substring consists of the same character. It counts the frequency of each character, sorts the string, and then verifies if every segment (formed by selecting every k-th character) is composed of the same character.
**/
#include<bits/stdc++.h> // স্ট্যান্ডার্ড C++ হেডার ফাইল ইনক্লুড করা হয়েছে

using namespace std;

int main() {
    int k;
    cin >> k; // ইনপুট হিসাবে ক-স্ট্রিং হবের সংখ্যা নেওয়া হচ্ছে

    string s;
    cin >> s; // স্ট্রিং সম্পর্কিত ইনপুট নেওয়া হচ্ছে

    map<char, int> m; // ক্যারেক্টার ফ্রিকোয়েন্সি স্টোর করার জন্য ম্যাপ
    for (char ch : s) {
        m[ch]++; // প্রতিটি ক্যারেক্টারের ফ্রিকোয়েন্সি গণনা করা হচ্ছে
    }

    char ch = s[0]; // প্রথম ক্যারেক্টার সেট করা হচ্ছে, প্রথম ক্যারেক্টার সেট হয়েছে যেন প্রথমের সেগমেন্ট সব সমস্যার জন্য
    int l = s.size(); // স্ট্রিংটির লেংথ হিসাব করা হচ্ছে, এই লেংথ নিয়ে এক্সামিনে দেওয়া হচ্ছে
    sort(s.begin(), s.end()); // স্ট্রিংটি সর্ট করা হচ্ছে

    int c = 0; // প্রথম ক্যারেক্টারের ফ্রিকোয়েন্সি গণনা করার জন্য কাউন্টার, এই কাউন্টার টি এই কাজের জন্য প্রথম সেগমেন্ট নিয়ে প্রতিটি সেগমেন্টের ফ্রিকোয়েন্সি হবে
    for (int i = 0; i < l; i++) {
        if (i % k == 0) {
            ch = s[i]; // প্রতিটি সেগমেন্টের প্রথম ক্যারেক্টার সেট করা হচ্ছে
        }
        if (s[i] == ch) {
            c++; // প্রতিটি সেগমেন্টে ক্যারেক্টারের ফ্রিকোয়েন্সি গণনা করা হচ্ছে
        }
    }

    if (c == l && c % k == 0) { // যদি সমস্ত ক্যারেক্টার একই হয় এবং এটি ক-স্ট্রিং হয়
        for (int i = 0; i < k; i++) {
            for (int j = i; j < l; j += k) {
                cout << s[j]; // ক-স্ট্রিং প্রিন্ট করা হচ্ছে
            }
        }
        cout << endl;
    } else {
        cout << -1 << endl; // অন্যথায়, প্রিন্ট করা হচ্ছে -1
    }

    return 0;
}
