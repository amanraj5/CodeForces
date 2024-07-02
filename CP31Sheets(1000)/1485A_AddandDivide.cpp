#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 1e9;
        int cnt;
        for (int i = 0; i * i <= a; i++)
        {
            if (b == 1 and i == 0)
                continue;
            cnt = i;
            int temp = a;
            while (temp)
            {
                temp /= (b + i);
                cnt++;
            }
            ans = min(ans, cnt);
        }

        cout << ans << endl;
    }
    return 0;
}