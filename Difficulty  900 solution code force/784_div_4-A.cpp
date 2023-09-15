#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,raiting;
    cin>>t;
    while(t--)
    {
        cin>>raiting;
        if(raiting<= 1339)
            cout<<" division 4\n";
        else if(raiting<= 1599  && raiting>= 1400 )
            cout<<" division 3\n";
        else if(raiting<= 1899 && raiting>= 1600)
            cout<<" division 2\n";
        else if(raiting>= 1900)
            cout<<" division 1\n";
    }
    return 0;

}

