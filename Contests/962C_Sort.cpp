#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0));
    vector<vector<int>> prefix_b(n + 1, vector<int>(26, 0));

    // Precompute prefix frequency counts
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            prefix_a[i + 1][j] = prefix_a[i][j];
            prefix_b[i + 1][j] = prefix_b[i][j];
        }
        prefix_a[i + 1][a[i] - 'a']++;
        prefix_b[i + 1][b[i] - 'a']++;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--; // Convert to zero-based index

        vector<int> freq_a(26, 0), freq_b(26, 0);

        for (int j = 0; j < 26; ++j)
        {
            freq_a[j] = prefix_a[r + 1][j] - prefix_a[l][j];
            freq_b[j] = prefix_b[r + 1][j] - prefix_b[l][j];
        }

        int changes = 0;
        for (int j = 0; j < 26; ++j)
        {
            changes += abs(freq_a[j] - freq_b[j]);
        }

        cout << changes / 2 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
