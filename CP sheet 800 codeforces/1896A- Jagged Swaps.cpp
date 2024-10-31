/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A.  Jagged Swaps
Problem Number :1896A
Difficulty     :800
Problem Link   :https://codeforces.com/problemset/problem/1896/A
STATUS         :Accepted
Problem Logic  :
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if a permutation is sorted
bool is_sorted(const vector<int>& x)
{
    for (int j = 1; j < x.size(); ++j)
    {
        if (x[j - 1] > x[j])
        {
            return false;
        }
    }
    return true;
}


bool can_sorted(vector<int> x)
{
    int n = x.size();

    // Perform the operation as long as we can
    bool made_Change = true;
    while (made_Change)
    {
        made_Change = false;
        for (int j = 1; j < n - 1; ++j)
        {
            if (x[j - 1] < x[j] && x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                made_Change = true;
            }
        }
    }

    return is_sorted(x);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n);

        for (int j = 0; j < n; ++j)
        {
            cin >> x[j];
        }

        if (can_sorted(x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
