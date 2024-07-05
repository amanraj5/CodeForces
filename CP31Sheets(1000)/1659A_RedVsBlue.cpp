#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int col = r / (b + 1);
        int extra = r % (b + 1);
        string ans = "";
        for (int i = 0; i < b + 1; ++i)
        {
            ans += string(col, 'R');

            if (extra > 0)
            {
                ans += 'R';
                --extra;
            }

            if (i < b)
            {
                ans += 'B';
            }
        }

        cout << ans << endl;
    }
    return 0;
}