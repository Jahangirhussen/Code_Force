/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Even Odds
Problem Number :318A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/318/A
STATUS         :Accepted
Problem Logic  : 1st sob odd value sajabo than even  sob ,total value hobe N,than k input nibo ,k number a je value seta print dibo
**/

#include<iostream>

using namespace std;

int main()
{
    long long n,k;
    cin >>n>>k;
long long mid=(n+1)/2;

     ///1 3 5 7 9 - 2 4 6 8 10

       if( k<= mid) cout<<2*k - 1; // sutro creted by me based on code

      else cout<<(2*(k-mid)) ;// sutro creted by me based on code




    return 0;
}
