#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin >>n;

if((n & (n-1)) ==0)
cout<<"No \n";

else
cout<<"yes"<<endl;


}
return 0;
}
/**
odd division mane je songka k odd dara bag jay,jeke odd dara..
odd k odd dara bjay so ekane kaj nai..
even jemon 2 4 6 8 10 12 14 16
odd bag jay= 6 10 14

odd bag jayna= 2 4 8 16 lokko korle deka jabe era sobai 2 er upor kicu power dile pawa jabe
so n&()n-1)==0 mane 2 er upor power dile n hoy kina..

*/
