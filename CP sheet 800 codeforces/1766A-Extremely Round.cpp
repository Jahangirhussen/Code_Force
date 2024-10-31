/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Extremely Round
Problem Number : 1766A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1766/A
STATUS         : Accepted
Problem Logic  :je digit hobe tAR BITOR JUST EKTA NON ZERI DIGIT HOTE PARBE,like 500 ekane non zero 1,550 eknae non zero 2 ta ,55

1 thwkw 9 porjonto sob 1 digit
than 10 theke 19 poirjono 1 non digil zero wala just 10,jekane zero chara 1 ace and 1  ta
than 20 theke 29 poirjono 1 non digil zero wala just 20,jekane zero chara 2 ace and 1  ta
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, conut = 0;
        cin >> n;
        while (n > 10)
        {
            conut += 9;
            n /= 10;/// like 30 mane 3 ta ace so 10 dara bag korle 3 asbe,,r er age 1 to 0 9 ta,,3+9=12 ta
        }
        conut += n;
        cout << conut << '\n';
    }
    return 0;
}

