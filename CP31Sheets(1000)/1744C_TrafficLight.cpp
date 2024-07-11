#include <bits/stdc++.h>
using namespace std;
#define arr arr.begin(), arr.end();
typedef long long ll;
void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s = s + s;
    int last = -1;
    int ans = 0;
    for (int i = 0; i < n + n; i++)
    {
        if (s[i] == 'g' && last != -1)
        {
            ans = max(ans, i - last);
            if (i > n)
                break;
        }
        else if (s[i] == c && i < n)
        {
            last = i;
        }
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