#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        long long var = 0;

        if (n % 4 == 1)
        {
            var -= n;
        }
        else if (n % 4 == 2)
        {
            var += 1;
        }
        else if (n % 4 == 3)
        {
            var += n + 1;
        }
        if (x & 1)
            cout << x - var << "\n";
        else
            cout << x + var << "\n";
    }
    return 0;
}