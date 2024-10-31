/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A. Forked!
Problem Number : 1904A
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1904/A
STATUS         : Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int xK, yK, a, b, xQ, yQ;
        cin >> xK >> yK >> a >> b >> xQ >> yQ;

        a = abs(a - xQ);
        b = abs(b - yQ);
        if(a > b) swap(a, b);

        if(xK == yK)
        {
            if(a == 0 && b == xK * 2)
                cout << "2\n";
            else if(a == xK * 2 && b == xK * 2)
                cout << "1\n";
            else
                cout << "0\n";
        }
        else
        {
            vector<pair<int, int>> moves =
            {
                {xK, yK}, {xK, -yK}, {-xK, yK}, {-xK, -yK},
                {yK, xK}, {yK, -xK}, {-yK, xK}, {-yK, -xK}
            };
            int ans = 0;

            for(const auto& move1 : moves)
            {
                for(const auto& move2 : moves)
                {
                    if(move1.first + move2.first == a && move1.second + move2.second == b)
                        ++ans;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
