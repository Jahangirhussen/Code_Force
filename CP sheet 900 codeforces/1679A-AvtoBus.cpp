/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. AvtoBus
Problem Number : 1679A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1679/A
STATUS         : Accepted
Problem Task   : You are given the total number of wheels `n`. You need to find the minimum and maximum number of buses that can have either 4 or 6 wheels.
Problem Logic  :
                1. If `n` is less than 4 or `n` is odd, it's impossible to create a bus (since buses must have 4 or 6 wheels). In this case, the output will be `-1`.
                2. If `n` is exactly 4, you only need one 4-wheeled bus.
                3. If `n` is greater than 4:
                                - Minimum buses: To get the minimum number of buses, start by using 6-wheeled buses, as they cover more wheels. The minimum number of buses for `n` wheels is calculated by the formula `(n + 5) / 6`.
                                - Maximum buses: To get the maximum number of buses, use as many 4-wheeled buses as possible. The maximum number of buses is calculated by the formula `n / 4`.
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n < 4 || n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (n == 4)
        {
            cout << "1 1" << endl;
        }
        else
        {

            /*
               For n = 14:
               - 2 six-wheeled buses (12 wheels) + 1 four-wheeled bus for the remaining 2 wheels
               - Total buses = 3
               For n = 16:
               - 2 six-wheeled buses (12 wheels) + 1 four-wheeled bus for the remaining 4 wheels
               - Total buses = 3
               Calculation: (n + 5) / 6
            */
            long long min_buses = (n + 5) / 6; // Minimum number of buses

            /*
               For n = 14:
               - 3 four-wheeled buses (12 wheels) + 2 remaining wheels
               - Total buses = 3
               For n = 16:
               - 4 four-wheeled buses (16 wheels)
               - Total buses = 4
               Calculation: n / 4
            */
            long long max_buses = n / 4; // Maximum number of buses

            cout << min_buses << " " << max_buses << endl;
        }
    }

    return 0;
}
