#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = (k * y + k - 1 + x - 1 - 1) / (x - 1);
        // For ceil division a/b=(a+b-1)/b, where a=(k*y+k-1),b=(x-1);
        cout << ans + k << endl;
    }
    return 0;
}