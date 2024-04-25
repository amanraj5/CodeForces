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
        int m = n * k;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        long long ans = 0;
        if (n == 2)
        {
            for (int i = 0; i < m; i += 2)
                ans += v[i];
        }
        else
        {
            int loop = (n + 1) / 2;
            if (n % 2 == 0)
                loop++;
            for (int i = k*(n-loop); i < m; i += loop)
                ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}