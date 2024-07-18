#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;

void solve()
{
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = {min(num, p), v[i]};
    }

    sort(all(arr));
    ll ans = p;
    int rem = n - 1;
    for (int i = 0; i < n; i++)
    {
        ans += min(arr[i].second, rem) * (ll)arr[i].first;
        rem -= min(arr[i].second, rem);

        if (rem <= 0)
            break;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}