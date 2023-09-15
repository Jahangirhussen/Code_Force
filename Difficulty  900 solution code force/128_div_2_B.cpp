/// logic ok but incomplate
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int raw=-1,coloum=-1,ans=0, wrong_ans=0;

    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        string s[n][m];
        for(int i=0; i<n; i++)
        {
        for(int i=0; i<m; i++){

            cin>>s[i][j];
        }
        }

///find robot other wise empty
        ///coloum er age porjonto cheek korbo ejonno colum porjonto loop
        for(i=0; i<n; i++) ///n for raw
        {
            for(j=0; j<m; j++) ///m for coloum,coloum er age porjonto cheek korbo ejonno colum porjonto loop
            {
                if( s[i][j] == 'R' )///R for robot..
                {
                    raw=i;
                    coloum=j;///coloum er age porjonto cheek korbo ejonno colum porjonto loop..
                    ///1st loop break if 1st robot find..
                    ans=1;

                    break;
                }
            }
            if(raw !=-1)///if find robot than update raw value rom we need close 2nd loop
                break;
        }
        ///robot find/empty chapter finished..
        /// start new chapter to cheek our robot  previous coloum does have any other robo(ans is no bcz our robo is 1st robo but need cheek ,na korle o hobe)..
        for(i=0; i<m; i++) ///m for raw
        {
            for(j=0; j<coloum; j++) ///m for coloum,coloum er age porjonto cheek korbo ejonno colum porjonto loop
            {
                if(s[i][j]=='R')
                {
                    /// jodi pai ans hobe na tai ans ta k amra 1 dorenei;
                    int wrong_ans=1;
                    break;
                }
            }
        }
/// colum cheek er kaj sesh...ekn raw chekk korbo just rrihjt raw in robo..
for(i=0; i<raw; i++) ///n for raw mNE ROBO ER rihjt side er robo cheek korbo
        {
            for(j=0; j<m; j++)
            {
                if(s[i][j]=='R')
                {

                    wrong_ans=1;

                    break;
                }
            }
        }
        if(wrong_ans==1 || ans==0)///ans 0 mne robo nai,,wrong 1 mane robo er upore ba right a robo aro ace,
            cout<<"No\n";
        else
            cout<<"yes \n";

    }
    return 0;
}


/**
jekane robo pabo sekane er uporer and right side a value oaile amra jekuno robo k 1 1 gor a nite parbo na
*/
/*
6
1 3
ERE
2 2
ER
RE
1 1
R
4 3
EEE
EEE
ERR
EER
3 3
EEE
EER
REE
*/
//  Y N Y Y Y N
///educational code force round 128 div 2 B.
