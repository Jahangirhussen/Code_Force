#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int i,n;
cin >>n;
int a[n];
int sum=0;
for(i=0;i<n;i++)
{
cin>>a[i];
sum=sum+ a[i]-1;
/**
step 1 a[0]=4__ so 4 k 4-1=3 upaye bag kora jay jemon [2 2 ]than 1st 2 k [1 1] than 2 nd 2 k [1 1]
step 2 a[1]=5__ so 5 k 5-1=4 upaye + step 1 er 3 total 7
step 3 a[2]=3__ so 3 k 3-1=2 upaye + step 1 and step 2 mile 7-- total 10
ekn shuru A kora mane upau 1 a se bengge mane od upay a..
so B er por mane 2nd bar se bangbe mane even upay a
than A than B ebabe cholbe...
*/
}

if(sum%2==1)///bag sesg 1 mane A korce A bolte errorgorn
cout<<"errorgorn \n";
else /// bag sesg 1 na mane 0 ja even mane B korce ekane b mane maomao90
cout<<"maomao90"<<endl;


}
return 0;
}
/**


*/
