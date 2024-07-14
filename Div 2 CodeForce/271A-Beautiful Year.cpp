/**
My Name        :JAHANGIR HUSSEN
Country        :Bangladesh
Gmail          :jahangirhussen06@gmail.com
Github Link    :https://github.com/Jahangirhussen

WebSite Name   :Code Force
Problem Name   :A. Beautiful Year
Problem Number :271
Difficulty     :Div 2
Problem Link   :https://codeforces.com/problemset/problem/271/A
STATUS         :Accepted
Problem Logic  :
**/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (true) {
        n++;
        int n1 = n % 10;
        int n2 = (n / 10) % 10;
        int n3 = (n / 100) % 10;
        int n4 = (n / 1000) % 10;

        if (n1 != n2 && n1 != n3 && n1 != n4 &&
            n2 != n3 && n2 != n4 && n3 != n4) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
