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
int a[n],b[n];
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) cin>>b[i];
sort(a,a+n);
sort(b,b+n);
int ans=0;
for(i=n-1;i>=0;i--)
{
    if(a[i]>b[i]  ||  b[i]-a[i]>1)
    {
        ans=1;
    }
}
if(ans==0)cout<<"YES\n";
else cout<<"NO\n";
    }
    return 0;
}
/**
3
3
-1 1 0
0 0 2
1
0
2
5
1 2 3 4 5
1 2 3 4 5...k -1 poejonto 1 add  hobe but ei index nai amr
*/
