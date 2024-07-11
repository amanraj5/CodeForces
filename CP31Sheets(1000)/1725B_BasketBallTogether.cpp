#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    sort(all(v));
    int r = n - 1;
    int l = 0;
    while (r >= l)
    {
        ll power = v[r];
        while (power <= d && r > l)
        {
            power += v[r];
            l++;
        }
        if (power > d)
            ans++;
        r--;
    }
    cout << ans << endl;
    return 0;
}