#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.rbegin(), arr.rend()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[num]++;
    }
    sort(all(v));
    for (int i = 0; i <= n; i++)
    {
        if (v[i] % 2 == 1)
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