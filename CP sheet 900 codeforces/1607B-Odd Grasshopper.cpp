/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen
WebSite Name   : Codeforces
Problem Name   : B. Odd Grasshopper
Problem Number : 1607B
Difficulty     : 900
Problem Link   : https://codeforces.com/problemset/problem/1607/B
STATUS         : Accepted
Problem Task   :
A grasshopper starts at position `x` and makes `n` jumps. If the current position is even,
it subtracts the jump distance; if odd, it adds the jump distance. After making all jumps,
 you need to find the final position of the grasshopper.
Problem Logic  :
we cheek therictically increses than we can se at a time always some falue are same like so use this techinewquw

    The movement of the grasshopper follows a repetitive pattern based on the remainder of `n % 4`. Here's the breakdown:
    - If `x` is even:
        - When `n % 4 == 1`: The final position is `x - n`.
        - When `n % 4 == 2`: The final position is `x + 1`.
        - When `n % 4 == 3`: The final position is `x + (n + 1)`.
    - If `x` is odd:
        - When `n % 4 == 1`: The final position is `x + n`.
        - When `n % 4 == 2`: The final position is `x - 1`.
        - When `n % 4 == 3`: The final position is `x - (n + 1)`.

This approach leverages the repetitive nature of the movements and uses modular arithmetic to determine
the final position without needing to simulate each jump, which is efficient in terms of time complexity.
Manual Verification
- To validate this logic, you can manually check the pattern by drawing out examples on paper. For example:
- Start with an initial position `x` and perform `n` jumps, observing how the position changes.
- Track the remainder of `n` divided by 4 and see how the final position corresponds to the provided conditions.
- This manual check helps to confirm that the repetitive nature and modular arithmetic logic hold true,
 making the solution accurate and efficient.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;

        long long rem = n % 4; // the remainder decides the pattern
        if (x % 2 == 0)
        {
            if (rem == 1) x -= n;
            else if (rem == 2) x += 1;
            else if (rem == 3) x += (n + 1);
        }
        else
        {
            if (rem == 1) x += n;
            else if (rem == 2) x -= 1;
            else if (rem == 3) x -= (n + 1);
        }

        cout << x << '\n';
    }

    return 0;
}
