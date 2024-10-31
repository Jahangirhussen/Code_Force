/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Coins
Problem Number : 1814A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1814/A
STATUS         : Accepted
Problem Logic  :2 taka ,and  K taka,,x ,y not negativemm nso use 2 and K and make N
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(n % 2 == 1 && k % 2 == 0)
            /// n even hole k jai houk ans yes,,karone y er man zero diye,seta vanish kora jabe ,r  2x er always even rakhe
            ///ekn n odd hole k odd hote hobe ,karon 2x even,,o k odd hole er sathe y=1 diye seta  odd raka jabe,,so even+odd =odd=n hone
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
