/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. String Task
Problem Number : 118A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/118/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s,result="";
    cin>>s;
     transform(s.begin(), s.end(), s.begin(), ::tolower);

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='y')
            continue;
        else{
            result=result+ '.';
            result=result+ s[i];
        }
    }
   cout<<result<<endl;
    return 0;
}
