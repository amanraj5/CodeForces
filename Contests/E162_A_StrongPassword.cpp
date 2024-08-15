#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    bool flag = true;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << s[i];
        if (s[i] == s[i + 1] && flag)
        {
            flag = false;
            cout << (char)((s[i] - 'a' + 1) % 26 + 'a');
        }
    }
    if (flag)
    {
        cout << (char)((s[n - 1] - 'a' + 1) % 26 + 'a');
    }
    cout << s[n - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}