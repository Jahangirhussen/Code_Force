/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Little Elephant and Rozdil
Problem Number : 205A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/205/A
STATUS         : Accepted
Problem Logic  :Find the city with the minimum time(input e time dewya ,je city jete smy kom seta koy number index a ace seta ber kora), if there is a tie print "Still Rozdil", otherwise print the index of the city with the minimum time.
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min_city = 100000, index = -1;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});

    }

    // Sorting the vector based on the first element of the pairs
    sort(v.begin(), v.end());

if(v[0].first == v[1].first) cout<<"Still Rozdil "<<endl;
        else cout << v[0].second << endl;


    return 0;
}
