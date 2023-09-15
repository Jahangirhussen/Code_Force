#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,m;
int a[n+3];
cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=a[0];
sort(a,a+n);
int sum=0;
    for(int i=0;i<n;i++)
{
   sum=sum+ max(a[i],a[i+1]);
}

sum=sum+n;
if(sum<=m)
    cout<<"yes\n"<<sum;
else
    cout<<"no\n";
}
    return 0;

}
