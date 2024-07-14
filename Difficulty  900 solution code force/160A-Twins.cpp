/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Twins
Problem Number :160A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/160/A
Problem Logic  : minimum koy ta coin niye ordek er cheye minimum  beshi tk pawa jay
STATUS         :Accepted
**/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,total=0,my_coin_sum=0, my_coin_number=0;
    cin >> n;
    int c[n];
    for (i = 0; i < n; i++) /// demo for me -- 2 1 2 3 4 2 1 = 15 value 6 coin,half is 7 --- 4 3 2 2 2 1 1
    {
        cin >> c[i];
        total=total+c[i];

    }
    sort(c, c + n, greater<int>()); //1st value is c and last value is c+n ,than sort system, just work in sort function,
    for (i=0; i<n; i++)
    {
        my_coin_sum=my_coin_sum+c[i];
        my_coin_number ++;
        if(my_coin_sum > (total/2) )break;
    }

    cout<< my_coin_number;

    return 0;
}



