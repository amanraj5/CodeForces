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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }
        int ans = 0;
        for (auto it : mp)
        {
            ans = max(ans, it.second);
        }
        cout << ans << endl;
    }
    return 0;
}