/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. DZY Loves Chessboard
Problem Number :445A
Difficulty     :900
Problem Link   :https://codeforces.com/problemset/problem/445/A
STATUS         :Accepted
Problem Logic  :
color="BW";
যেহেতু মূলত সেলের রঙ হবে 'B' বা 'W', এখানে 'B' হলো কালো এবং 'W' হলো সাদা।
color_index = (i+j)%2;


যদি i = 0 এবং j = 0:
0 + 0 % 2 = 0, এখন color[0] হলো 'B' (কালো)।
যদি i = 0 এবং j = 1:
0 + 1 % 2 = 1, এখন color[1] হলো 'W' (সাদা)।
যদি i = 0 এবং j = 2:
0 + 2 % 2 = 0, এখন color[0] হলো 'B' (কালো)।
যদি i = 1 এবং j = 0:
1 + 0 % 2 = 1, এখন color[1] হলো 'W' (সাদা)।
যদি i = 1 এবং j = 1:
1 + 1 % 2 = 0, এখন color[0] হলো 'B' (কালো)।
যদি i = 1 এবং j = 2:
1 + 2 % 2 = 1, এখন color[1] হলো 'W' (সাদা)।
যদি i = 2 এবং j = 0:
2 + 0 % 2 = 0, এখন color[0] হলো 'B' (কালো)।
যদি i = 2 এবং j = 1:
2 + 1 % 2 = 1, এখন color[1] হলো 'W' (সাদা)।
যদি i = 2 এবং j = 2:
2 + 2 % 2 = 0, এখন color[0] হলো 'B' (কালো)।
**/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string color = "BW"; // সাদা এবং কালো গুটির রঙ স্ট্রিং
    vector<vector<char>> input(n, vector<char>(m)); // n x m সাইজের 2D ভেক্টর ডিক্লেয়ার করা

    // গ্রিড ইনপুট নেওয়া
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> input[i][j];

            if (input[i][j] == '.')   // যদি সেলটি ভালো হয়
            {
                int color_index_after_condition = (i + j) % 2; // বোর্ডের বর্তমান সেলের রঙ নির্ধারণ করতে i এবং j যোগ করে মডুলাস অপারেশন ব্যবহার করা
                input[i][j] = color[color_index_after_condition]; // সেলটির রঙ সেট করা
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << input[i][j];
        }
        cout << endl;
    }

    return 0;
}
