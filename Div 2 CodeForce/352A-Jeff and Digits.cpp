/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Jeff and Digits
Problem Number : 352A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/352/A
STATUS         : Accepted
Problem Logic  :
**/
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> digits(n);

    // Counting number of 5s and 0s
    int five_count = 0, zero_count  = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> digits[i];
        if (digits[i] == 5)
            five_count++;
        else if (digits[i] == 0)
            zero_count ++;
    }

    if (zero_count  == 0)
    {
        cout << -1 << endl;
    }
    else if (five_count < 9)
    {
        cout << 0 << endl;
    }
    else
    {
        // Finding the largest number divisible by 9
        int maxFive = five_count;
        while (maxFive % 9 != 0)
        {
            maxFive--;
        }

        // Outputting the result
        for (int i = 0; i < maxFive; ++i)
        {
            cout << 5;
        }
        for (int i = 0; i < zero_count ; ++i)
        {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}
