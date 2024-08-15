#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;

int game(int a, int b)
{
    if (a > b)
        return 1;
    if (a == b)
        return 0;
    if (a < b)
        return -1;
}
void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;
    if ((game(a1, b1) + game(a2, b2)) > 0)
        ans++;
    if ((game(a1, b2) + game(a2, b1)) > 0)
        ans++;
    if ((game(a2, b1) + game(a1, b2)) > 0)
        ans++;
    if ((game(a2, b2) + game(a1, b1)) > 0)
        ans++;
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