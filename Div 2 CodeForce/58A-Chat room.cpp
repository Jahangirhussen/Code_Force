/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Chat room
Problem Number : 58A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/58/A
STATUS         : Accepted
Problem Logic  :
**/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,need="hello",ans="NO";
    cin>>s;
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==need[j]) ///s[i] er i value ki need[j} er j value soman soman ,if yes than j er porer ta dekbe,,ebabebe  je er sob deka and peye jawa mane j=5       {
        {
            j++;

            // j er first value pawar por second e shift hobe than 2nd cheek dibe
        }
        if(j==5)///j=5 mane hello 5 ta value peye heche
        {
            ans="YES\n";
            break;
        }
    }



    cout<<ans<<endl;
    return 0;
}

