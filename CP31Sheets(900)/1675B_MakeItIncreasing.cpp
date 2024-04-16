#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long ans = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while (v[i] >= v[i + 1] && v[i] > 0)
            {
                v[i] /= 2;
                ans++;
            }
            if (v[i] == v[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}