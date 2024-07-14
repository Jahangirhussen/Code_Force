/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Supercentral Point
Problem Number : 165A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/165/A
STATUS         : Accepted
Problem Logic  : একটি পয়েন্ট তখনই সুপারসেন্ট্রাল হবে যখন তার কমপক্ষে একটি উপরের, একটি নিচের, একটি বাম এবং একটি ডান প্রতিবেশী থাকবে।
point (x',y') is (x,y)'s right neighbor, if x'>x and y'=y
point (x',y') is (x,y)'s left  neighbor, if x'<x and y'=y
point (x',y') is (x,y)'s lower neighbor, if x'=x and y'<y
point (x',y') is (x,y)'s upper neighbor, if x'=x and y'>y
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n], y[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        bool Upper = false, Lower = false, Left = false, Right = false;

        for (int j = 0; j < n; ++j)
        {
            if (x[j] == x[i] && y[j] > y[i])
            {
                Upper = true;
            }
            else if (x[j] == x[i] && y[j] < y[i])
            {
                Lower = true;
            }
            else if (x[j] < x[i] && y[j] == y[i])
            {
                Left = true;
            }
            else if (x[j] > x[i] && y[j] == y[i])
            {
                Right = true;
            }
        }

        if (Upper && Lower && Left && Right)///sob gula ture mane chari dike minimun ekta,,ekta holei true on hobe.
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
