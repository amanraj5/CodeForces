#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> v(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i] = x + v[i - 1];
        }
        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long sum = v[l - 1] + (r - l + 1) * k + v[n] - v[r];

            if (sum % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}