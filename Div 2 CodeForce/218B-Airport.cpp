/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :B. Airport
Problem Number :218B
Difficulty     :div 2
Problem Link   :https://codeforces.com/problemset/problem/218/B
STATUS         :Accepted
Problem Logic  :
**/

#include <iostream> /// ইনপুট এবং আউটপুট স্ট্রিম ব্যবহার করার জন্য।
#include <vector> /// ভেক্টর ডেটা স্ট্রাকচার ব্যবহারের জন্য।
#include <algorithm> /// sort  ফাংশন ব্যবহার করার জন্য।
using namespace std; /// স্ট্যান্ডার্ড নামস্পেস ব্যবহার করা।

int main()
{
    int n, m, max = 0, min = 0; /// n এবং m ইন্টিজার ইনপুট, এবং max ও min এর জন্য ইন্টিজার ভেরিয়েবল।
    cin >> n >> m; /// n এবং m ইনপুট নেওয়া।

    vector<int> v1, v2; /// দুটি ভেক্টর ভেরিয়েবল ডিক্লেয়ার করা।

    for (int i = 0; i < m; i++)
    {
        int x; /// একটি ইন্টিজার ভেরিয়েবল ডিক্লেয়ার করা।
        cin >> x; /// x ইনপুট নেওয়া।
        v1.push_back(x); /// x কে ভেক্টর v1 এর শেষ প্রান্তে যোগ করা।
    }

    v2 = v1; /// ভেক্টর v2 কে v1 এর সমান করা।

    int max_income=0;
    for (int i = 0; i < n; i++)///v1  niye max count kortbo
    {
        sort(v1.begin(),v1.end(),greater<int>());
        max_income=max_income + v1[0];
        v1[0]=v1[0]-1;
    }
    int min_income=0;

    for (int i = 0; i < n; i++)
    {
        sort(v2.begin(),v2.end());
        min_income=min_income + v2[0];
        v2[0]=v2[0]-1;

        if (v2[0] == 0)v2.erase(v2.begin() + v2[0]);

    }

    cout << max_income << " " << min_income ; /// সর্বাধিক এবং সর্বনিম্ন আয় প্রিন্ট করা।
    return 0; /// প্রোগ্রাম সমাপ্ত করা।
}
