#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int ab=0,ba=0,i;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
                ab++,i++;

        }
         for(i=0;i<s.size();i++)
        {
             if(s[i]=='b' && s[i+1]=='a')
                ba++,i++;
        }

        if(ab==ba)
            cout<<"yes  "<<s<<endl;
        else if(ab>ba)
        {
                s[0]='b';
            cout<<"  yes ab>ba  "<<s<<endl;
        }
        else if(ba>ab)
        {
            s[0]='a';
            cout<<"  yes ba>ab "<<s<<endl;
        }
    }

    return 0;
}
/**
4
b
aabbbabaa
abbb
abbaab
*/
///ab substring ki ba substring er soman jodi yes taile s print or no hole soman banaite hobe 1st a ja take seta ek beshi hoy so 1st k cng korle kaj hoye jabe
