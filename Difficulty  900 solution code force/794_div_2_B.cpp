#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int i,n;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
int ans=0;
for( i=1;i<n;i++)
{
    if(a[i-1]>a[i])
    {
        ans++,i++;
    }
}
cout<<"yes =" << ans<<endl;

    }
    return 0;
}
/**
5
3
1 2 3
4
4 3 2 1
2
1 2
2
2 1
6
4 5 6 1 2 3
*/
