#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    unordered_set<char> st;
    int ans = 0;
    for (char c : s)
    {
        st.insert(c);
        mp[c]--;
        if (mp[c] == 0)
            mp.erase(c);
        int len = (st.size() + mp.size());
        ans = max(ans, len);
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