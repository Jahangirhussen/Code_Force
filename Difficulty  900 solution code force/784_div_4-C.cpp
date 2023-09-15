#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,x;
       int odd_even=0,odd_odd=0,even_even =0,even_odd=0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>x;
            if(i%2==0)///even index entry ** odd even mix hole +1 korar por o odd even mix takbe but we need full odd otoba full even array..
            {
                if(x%2==0)
                    even_even ++;///even index er even value
                else
                    even_odd ++;///even index er odd value

            }
            else ///odd index entry ** odd even mix hole +1 korar por o odd even mix takbe but we need full odd otoba full even array..
            {
                if(x%2==0)
                    odd_even ++;
                else
                    odd_odd ++;
            }
        }

        if( (odd_even !=0 && odd_odd !=0) ||  (even_even !=0 && even_odd !=0))
        {
            /**ekane odd index er even & odd mix hole hobe na mane jekunu ekta zero hote hobe ...
          otoba  ekane even index er even & odd mix hole hobe na mane jekunu ekta zero hote hobe
            */
            cout<<"NO \n";
        }

        else
            cout<<"YES \n";
    }
    return 0;
}
/**
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
*/
