#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
                cnt++;
            else
            {
                if (cnt >= k)
                    ans += ((cnt - k + 1) * (cnt - k + 2)) / 2;
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ans += ((cnt - k + 1) * (cnt - k + 2)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}