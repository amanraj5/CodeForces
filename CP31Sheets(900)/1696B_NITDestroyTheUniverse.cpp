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
        vector<int> v(n + 1, 0);
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {

            cin >> v[i];
            if (v[i - 1] == 0 && v[i] != 0)
                ans++;
        }
        cout << min(ans, 2) << endl;
    }
    return 0;
}