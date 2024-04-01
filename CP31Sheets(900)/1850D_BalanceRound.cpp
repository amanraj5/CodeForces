#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(begin(v), end(v));
        int ans = 0;
        int j = 0, i;
        for (i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] <= k)
                continue;

            ans = max(ans, i - j);
            j = i;
        }
        ans = max(ans, i - j);
        cout << n - ans << endl;
    }
    return 0;
}