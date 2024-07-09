#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(arr) arr.begin(), arr.end()

void solve()
{
    int n;
    cin >> n;
    int min_ele = INT_MAX;
    vector<int> second_min;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
        int minEle = *min_element(all(v));
        min_ele = min(min_ele, minEle);
        v.erase(find(all(v), minEle));
        second_min.push_back(*min_element(all(v)));
    }
    cout << (ll)accumulate(all(second_min), (ll)min_ele) - *min_element(all(second_min)) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}