/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Walking Master
Problem Number : 1806A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1806/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        if(d<b  )
            ///b,d represent y,b can just +   .. we need go b to d,if d less than b,than we can't,we just add 1 mone with b
            ///id y is fixed than a just go back negativ (x−1,y) so cheek

        {
            cout<<-1<<endl;
        }
        else
        {
            int y=abs(d-b) ;///we can add b,or did'nt touch b,so 1st work b .by goto d....
            a= (a+y);///  if we add b ,that aslo add a,as same value rule (x+1,y+1 ),,know a is updated a

            int x =abs(a-c);///y is fix by rule  (x−1,y),know just need to go c,,a,c represnt x


            /// if(d<b  || b+c > a+d) ei if else er bodole upore if e eta add korleo hobe 100% cheek kora

            if(c>a) cout<<-1<<endl;///y fix er por x just minus hote pare ejnno eta,
           else cout<< x+y <<endl;///know print total point ,for a.c is x,.and b d is y,,so add total
            }
    }
    return 0;
}

