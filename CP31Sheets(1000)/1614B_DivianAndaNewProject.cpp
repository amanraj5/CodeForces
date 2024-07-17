#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.rbegin(), arr.rend()
typedef long long ll;

int len = 1000000;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[i] = {num, i};
    }
    vector<int> temp(n);
    sort(all(v));

    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        temp[v[i].second] = pos;
        if (i > 0 && i % 2 == 1)
            pos = pos * (-1) + 1;
        else
            pos = pos * (-1);
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum = sum + (ll)abs(temp[v[i].second]) * 2 * v[i].first;
    }
    cout << sum << endl;
    cout << 0 << " ";
    for (int i : temp)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}