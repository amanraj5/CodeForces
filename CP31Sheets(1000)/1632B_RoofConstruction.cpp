#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;

    int x = log2(n - 1);
    x = pow(2, x);
    for (int i = x - 1; i >= 0; i--)
    {
        cout << i << " ";
    }
    for (int i = x; i < n; i++)
    {
        cout << i << " ";
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