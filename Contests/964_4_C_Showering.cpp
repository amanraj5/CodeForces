#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    if (v[0].first >= s || (m - v[n - 1].second) >= s)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        int diff = v[i].first - v[i - 1].second;
        if (diff >= s)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}