#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
map<int,int>jk_map;
 int i=0,n,output=-1;
 cin>>n;
 for(i;i<n;i++)
 {
     int value;
     cin>>value;
     jk_map[value]++;
     if(jk_map[value]>=3)
        output=value;

 }
 cout<<"yes "<<output <<endl;
}
return 0;

}
/**
7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4
*/
