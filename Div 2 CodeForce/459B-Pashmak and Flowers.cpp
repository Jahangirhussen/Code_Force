/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : B. Pashmak and Flowers
Problem Number : 459B
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/459/B
STATUS         : Accepted
Problem Logic  : max r min er doifferent ,,max r min er gunfol ,karon max koyjura lagbe seta count hobe max 3 min 2 hole total 6 ta lagbe
**/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<long long, long long> m;

    long long min_flawer_value = 1e18, max_flawer_value = -1e18;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        m[x]++;
        min_flawer_value = min(min_flawer_value, x);
        max_flawer_value = max(max_flawer_value, x);
    }

    if (min_flawer_value != max_flawer_value)
    {
        cout << max_flawer_value - min_flawer_value << " " << m[max_flawer_value] * m[min_flawer_value] << "\n";
        /*
        88 2 bar ,1 3 bar hole
        1st 88 sathe 1 ta kore 3 ta 1, 3bar
        2st 88 sathe 1 ta kore 3 ta 1, 3bar
        total 2 bar pair hoy
         */
    }
    else
    {
        cout << 0 << " " << (n * (n - 1)) / 2 << "\n";
        /*
        3 3 3 3 3
        ekane 1st theke last 9 ta bar 9 way te jura newya jay
        last theke 1st 9 ta,nije qst 1st er sathe ek ta last last er sathe ekta,,mane 20
        1st theke hiseb korle jatra jura hoy ,last theke count o same ..so ek side coiunt nibo ,,totak 10
        */
    }

    return 0;
}
