/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen
WebSite Name   : Codeforces
Problem Name   : A. AB Balance
Problem Number : 1606A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1606/A
STATUS         : Accepted

Problem Task   :
You are given a string that consists only of the characters 'a' and 'b'.
Determine the minimum steps required to make AB(s) equal to BA(s) in the string s.

Problem Logic  :
First, we will compare the first and last characters of the string. If the first and last characters are different,
the first character will be replaced with the value of the last character. Then, the modified string will be output. If the first and last characters are the same, no changes will be made, and the original string will be printed as is.
*/

#include <iostream>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] != s.back())
        {
            s[0] = s.back();
        }
        cout << s << endl;
    }
    return 0;
}
