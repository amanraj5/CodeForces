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
        string s;
        cin >> s;
        int w_cnt = 0;
        int ans = INT_MAX;
        int j = 0;
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == 'W')
                w_cnt++;
            if (i >= k - 1)
            {
                ans = min(ans, w_cnt);
                if (s[j] == 'W')
                    w_cnt--;
                j++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}