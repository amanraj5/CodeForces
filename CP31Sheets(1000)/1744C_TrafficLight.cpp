#include <bits/stdc++.h>
using namespace std;
#define arr arr.begin(), arr.end();
typedef long long ll;
void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    int first = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
        {
            first = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            int cnt = 0, flag = 0;
            for (int j = i + 1; j < n; j++)
            {
                cnt++;
                if (s[j] == 'g')
                {
                    flag++;
                    break;
                }
            }
            i = i + cnt;
            if (flag)
            {
                ans = max(ans, cnt);
            }
            else
            {
                ans = max(ans, cnt + 1 + first);
            }
        }
        }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}