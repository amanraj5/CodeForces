#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> v(n, 0);
    if (s < k * b || s > k * b + n * (k - 1))
    {
        cout << "-1\n";
        return;
    }
    v[0] = (ll)k * b;
    s -= v[0];
    for (int i = 0; i < n; i++)
    {
        if (s >= k - 1)
        {
            v[i] += k - 1;
            s -= (k - 1);
        }
        else
        {
            v[i] += s;
            s -= v[i];
            break;
        }
    }
    if (s > 0)
        cout << "-1\n";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}