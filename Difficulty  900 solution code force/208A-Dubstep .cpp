/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Dubstep
Problem Number :208A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/208/A
STATUS         :Accepted

Problem Logic  :there are two way
1) WUB subset takle seta count hobe space hoye,than 2 ta word er bitor ekta space reke baki space remove kore dibo,
2)WUB subset takle sekane ekta space add korbo,than er bodole zero diye dibo,last a zero sob remove kore dibo
**/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool space = false;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'W' && i + 2 < s.size() && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (space) cout << ' ';
            space = false;
            continue;
        }
        cout << s[i];
        space = true;
    }
    cout << endl;

    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,k="";
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') //WUBWEWUBAREWUBWUBWUBWUBWUBWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
        {
            s[i]=' ';
            s[i+1]=' ';
            s[i+2]=' ';
            i=i+2;

        }
        k=k+s[i];


    }
   //  s.erase(remove(s.begin(), s.end(), ' '), s.end());

    cout<<k;

    return 0 ;
}

*/
