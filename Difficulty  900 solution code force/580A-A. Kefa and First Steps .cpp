/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Kefa and First Steps
Problem Number :580A
Difficulty     :900
Problem Link   : https://codeforces.com/problemset/problem/580/A
STATUS         :Accepted

Problem Logic  :2 2 1 3 4 1 -----------------------------------------------------
i=1
index 1 big or same equal index 0 (2>=2),so count is know 2
index 2 is less ,in index 1(we need 1>=2,its flase) so here find #max cout is 2,#count again 1_______2 2 1 done

know i=3
index 3 big or same equal index 2 (3>=1),so count is know 2
index 4 big or same equal index 3 (4>=3),so count is know 3
index 5 is less ,in index 4(we need 1>=4,its flase) so here find #max cout is 3,#count again 1_______2 2 1     3 4 1 done

after finish the loop than cheek again max value to known how many max value we find than big to bigger one



**/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }



    int max_count = 1, count = 1; ///10 100 111 1 2-----2 2 1 3 4 1
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);///2
            count = 1;
        }
    }
    max_count = max(max_count, count);

    cout << max_count << endl;

    return 0;
}
