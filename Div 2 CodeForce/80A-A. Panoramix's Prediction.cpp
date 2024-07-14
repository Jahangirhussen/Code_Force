/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A. Panoramix's Prediction
Problem Number : 80A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/80/A
STATUS         : Accepted
Problem Logic  :
**/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {

    int n, m;
    cin >> n >> m;

    if (!isPrime(n) || !isPrime(m)) {
        cout << "NO" << endl;
        return 0;
    }

    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    if (nextPrime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
