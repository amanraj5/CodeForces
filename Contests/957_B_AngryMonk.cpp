#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < k - 1; i++)
    {
        sum += (2 * v[i] - 1);
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}