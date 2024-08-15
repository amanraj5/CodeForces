#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    if (n < 102)
    {
        cout << "NO\n";
        return;
    }
    string num = to_string(n);
    if (num.substr(0, 2) != "10")
    {
        cout << "NO\n";
        return;
    }

    int x = stoi(num.substr(2));
    if (to_string(x) != num.substr(2))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}