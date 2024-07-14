/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. The number of positions
Problem Number : 124A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/124/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;
     cout << min((n-a),(b+1)) << endl; ///n-a 1st theke count korbe,,,,,,b+1 last thele count korbe,,je dile tar seriul kom setai ans

    return 0;
}

/**
n=9 __  1 2 3 4 5 6 7 8 9
a=5 ,mane tar age 5 jon =n-a=6 num e se 1 2 3 4 5 (6) 7 8 9 ==tar obostan gonona korle 6 number e
b=3 ,mane tar pichone 3 jon  ,,9 8 7 (6) 4 5 3 2 1 ekane tar obostan gonona korle se 4 number e mane b+1=4
so tar sob cheyey kache je obostan seta count hobe
*/
