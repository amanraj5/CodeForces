#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool ans = false;
        int A = 2 * b - c;
        int B = a + (c - a) / 2;
        int C = 2 * b - a;
        if (A >= a && A % a == 0 && A != 0)
            ans = true;
        else if (B >= b && (c - a) % 2 == 0 && B % b == 0 && B != 0)
            ans = true;
        else if (C >= c && C % c == 0 && C != 0)
            ans = true;
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}