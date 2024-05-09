#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int oneCount = 0, odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i : v)
    {
        if (i % k == 0)
        {
            cout << 0 << endl;
            return;
        }
    }

    if (k == 2)
    {
        cout << 1 << "\n";
        return;
    }
    else if (k == 3)
    {
        int ans = 3;
        for (int i : v)
        {
            ans = min(ans, 3 - i % 3);
        }
        cout << ans << endl;
        return;
    }
    else if (k == 5)
    {
        int ans = 5;
        for (int i : v)
        {
            ans = min(ans, 5 - i % 5);
        }
        cout << ans << endl;
        return;
    }
    else
    {
        vector<int> mod(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] + 1) % 4 == 0)
            {
                flag = true;
            }
            mod[i] = v[i] % 2;
        }
        sort(mod.begin(), mod.end());
        if (mod[0] == 0 && mod[1] == 0)
        {
            cout << 0 << endl;
            return;
        }
        else if (mod[0] == 0 && mod[1] == 1)
        {
            cout << 1 << endl;
            return;
        }
        else if (mod[0] == 1 && mod[1] == 1)
        {
            if (flag)
                cout << 1 << endl;
            else
                cout << 2 << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}