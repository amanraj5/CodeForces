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
        bool ans = false;

        vector<int> v;
        for (auto it : mp)
        {
            v.push_back(it.second);
        }
        if (v.size() == 1)
            ans = true;
        else if (v.size() > 2)
            ans = false;
        else if (abs(v[1] - v[0]) < 2)
            ans = true;
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}