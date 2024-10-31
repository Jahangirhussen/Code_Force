/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Codeforces
Problem Name   : A.Twin Permutations
Problem Number : 1831A
Difficulty     : 800
Problem Link   : https://codeforces.com/problemset/problem/1831/A
STATUS         : Accepted

Problem Logic  :

 **Example:**
   - Consider array `a = [4, 1, 3, 2]`. After transformation, `b` will be calculated as follows:
     - `b[0] = n - a[0] + 1 =    4 - 4 + 1 =  1`
     ei hisebe n max ,a[i] joto bororo biyk er fole toto chuto man jabe b te,is both same than its will zero so add 1

     - `b[1] = n - a[1] + 1 =    4 - 1 + 1 =  4`
     - `b[2] = n - a[2] + 1 =    4 - 3 + 1 =  2`
     - `b[3] = n - a[3] + 1 =    4 - 2 + 1 =  3`
   - Hence, `b = [1, 4, 2, 3]

**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = n - a[i] + 1;
// এই ক্ষেত্রে n হচ্ছে সর্বাধিক মান, এবং a[i] যত বড় হবে,    b এর মান তত ছোট হবে। যদি উভয় সমান হয়, তাহলে মান শূন্য হবে, তাই 1 যোগ করো।


        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
