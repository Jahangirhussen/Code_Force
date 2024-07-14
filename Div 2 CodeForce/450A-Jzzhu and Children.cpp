/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Jzzhu and Children
Problem Number : 450A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/450/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q; // pair ব্যবহার করছি যাতে index ট্র্যাক করা যায়

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push({x, i }); // {value, index} পুশ করছি
    }
     int index = -1;


    while(!q.empty())///jotokon porjonto empyty na hoy totokon porjonto loop cholbe,
    {
        auto input = q.front();///surutei man ta save kori than pop kore dei,karone amr pop kore last a value add kortei hobe jodi kaoron ekbar count er por jodi aro nithe chay last a jabe,
        q.pop();

        if(input.first - m > 0) ///jodi m er cheye beshi nite pare ,push hobe m newya bade koyta baki seta,r tar index
        {
            q.push({input.first - m, input.second});
        }
        else ///jodi m niye sesh hoy tahole setar index count hobe,jodi eta last value na hoy tahole loop kaj korbe r bar bar index update hoye ,last index je bari jabe seta peye jabo
        {
            index = input.second;
              /// pop er karone back  ek ek kore komteche tai index update holeo queue size er bahire jay na,

        }
    }

    cout << index << endl;
    return 0;
}

