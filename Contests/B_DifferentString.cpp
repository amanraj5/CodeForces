#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        if (mp.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int i = 1;
            while (s[i] == s[i - 1])
            {
                i++;
            }
            swap(s[i], s[i - 1]);
            cout << s << endl;
        }
    }
    return 0;
}