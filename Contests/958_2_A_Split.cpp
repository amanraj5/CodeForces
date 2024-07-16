#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;

    cout << (n + k - 3) / (k - 1) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}