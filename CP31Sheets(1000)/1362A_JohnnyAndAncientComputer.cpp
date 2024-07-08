#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "0\n";
        return;
    }
    if (x < y)
    {
        swap(x, y);
    }
    ll ans = 0;
    while (x > y)
    {
        if (x / 8 >= y && x % 8 == 0)
        {
            x /= 8;
            ans += 1;
        }
        else if (x / 4 >= y && x % 4 == 0)
        {
            x /= 4;
            ans += 1;
        }
        else if (x / 2 >= y && x % 2 == 0)
        {
            x /= 2;
            ans += 1;
        }
        else
        {
            break;
        }
    }
    if (x == y)
        cout << ans << endl;
    else
        cout << "-1\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}