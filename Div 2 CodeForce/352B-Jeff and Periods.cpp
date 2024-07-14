/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   :B. Jeff and Periods
Problem Number :352b
Difficulty     : dIV 2
Problem Link   :https://codeforces.com/problemset/problem/352/B
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long, vector<long long>> m;

    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        m[x].push_back(i);
        /*
        ধরা যাক, ইনপুট ধারা হলো 3 1 2 3 2 এবং আমরা প্রতিটি ইনডেক্স ধরে নিচ্ছি (০ থেকে শুরু করে):

        প্রথম ইনপুট 3 এর জন্য, m[3]-এর মান হিসেবে 0 যোগ হবে।
        দ্বিতীয় ইনপুট 1 এর জন্য, m[1]-এর মান হিসেবে 1 যোগ হবে।
        তৃতীয় ইনপুট 2 এর জন্য, m[2]-এর মান হিসেবে 2 যোগ হবে।
        চতুর্থ ইনপুট 3 এর জন্য, m[3]-এর মান হিসেবে 3 যোগ হবে।
        পঞ্চম ইনপুট 2 এর জন্য, m[2]-এর মান হিসেবে 4 যোগ হবে।
        ফলে, ম্যাপ m হবে:

        m[3] = {0, 3}
        m[1] = {1}
        m[2] = {2, 4}


        */
    }

    vector<pair<long long, long long>> result;

    for(auto i: m)
    {
        if(i.second.size() == 1)
        {
            result.push_back({i.first, 0});
        }
        else
        {
            bool is_arithmetic = true;
            long long diff = i.second[1] - i.second[0];
            for(size_t j = 2; j < i.second.size(); j++)
            {
                if(i.second[j] - i.second[j - 1] != diff)
                {
                    is_arithmetic = false;
                    break;
                }
            }
            if(is_arithmetic)
            {
                result.push_back({i.first, diff});
            }
        }
    }

    cout << result.size() << endl;
    for(auto i: result)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
