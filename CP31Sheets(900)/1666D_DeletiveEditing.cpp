#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        vector<int> S(26, 0), T(26, 0);
        for (char c : s)
            S[c - 'A']++;
        for (char c : t)
            T[c - 'A']++;
        for (int i = 0; i < 26; i++)
        {
            int dlt = S[i] - T[i];
            char c = i + 'A';

            for (int i = 0; dlt > 0 && i < s.size(); i++)
            {
                if (s[i] == c)
                {
                    s[i] = '#';
                    dlt--;
                }
            }
        }
        string tmp = "";
        for (auto c : s)
        {
            if (c != '#')
            {
                tmp += c;
            }
        }
        if (tmp == t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}