#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[i] = {num - x, num + x};
    }

    int ans = 0;
    int l = v[0].first;
    int r = v[0].second;
    for (int i = 1; i < n; i++)
    {
        l = max(l, v[i].first);
        r = min(r, v[i].second);
        if (l > r)
        {
            ans++;
            l = v[i].first;
            r = v[i].second;
        }
        
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}