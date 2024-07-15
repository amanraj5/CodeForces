#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        if (num == 1)
            oneCount++;
    }
    int cnt = 0;
    for (int i = 0; i < n;)
    {
        int num = s[i] - '0';
        if (num == 0)
        {
            while (i < n && (s[i] - '0') == 0)
            {
                i++;
            }
            cnt++;
        }
        else
        {
            i++;
        }
    }
    if (oneCount > cnt)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}