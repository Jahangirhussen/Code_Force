/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : D. Balanced Round
Problem Number : 1850D
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1850/D
STATUS         : Accepted
Problem Task   :
- You are given a string `s`, where each character is either `<` or `>`.
- You need to create an array that is compatible with this string `s`.
- The goal is to minimize the cost of the array, where the cost is defined as the number of distinct elements in the array.

Problem Logic  :
- Determine the length of the longest segment of consecutive `<` or `>` characters in the string `s`.
- For each test case:
  - Use the variable `count_close_symbol_is_equal` to count the number of consecutive identical characters.
  - If the current character matches the previous character, increment `count_close_symbol_is_equal`. Otherwise, update `close_max_symbol` and reset `count_close_symbol_is_equal` to 1.
  - At the end of the loop, find the maximum segment length.
  - The minimum cost of the array is the length of the longest segment plus 1, because an additional symbol is needed to accommodate both ends of the segment.
**/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
                string s;

        cin>>n>>s;
        int count_close_symbol_is_equal=1,close_max_symbol=1;
        for (int i=1; i<n; i++)
        {
            if (s[i]==s[i-1])
            {
                count_close_symbol_is_equal++;
            }
            else
            {
                close_max_symbol=max(close_max_symbol,count_close_symbol_is_equal);
                count_close_symbol_is_equal=1;
            }
        }
        close_max_symbol=max(close_max_symbol,count_close_symbol_is_equal);
        cout<<close_max_symbol+1<<endl;///+1 because both side o symbol need
    }
    return 0;
}
