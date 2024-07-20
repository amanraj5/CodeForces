#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool f = true;
    for (int i = 0; i < n; i++)
    {
        ans[i] = i + 1;
    }
    ll l = 0, r = 0;
    while (r < n)
    {
        while (r < n - 1 && v[r] == v[r + 1])
        {
            ++r;
        }
        if (l == r)
        {
            f = false;
            break;
        }
        else
        {
            rotate(ans.begin() + l, ans.begin() + r, ans.begin() + 1 + r);
        }
        l = r + 1;
        ++r;
    }
    if (f)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i]<<" ";
        }
    }
    else{
        cout<<-1;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}