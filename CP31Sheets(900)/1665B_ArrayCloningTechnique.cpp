#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ele = 0;
        for (auto it : mp)
        {
            ele = max(ele, it.second);
        }
        int ans = 0;
        while (ele < n)
        {
            int freq = min(n - ele, ele);
            ans += 1 + freq;
            ele += freq;
        }
        cout << ans << endl;
    }
    return 0;
}