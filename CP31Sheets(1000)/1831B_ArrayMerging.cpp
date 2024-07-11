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
        // Declaring two vector to store the user input
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        // Now we have to intialise two more vectors to store frequency of each number from both array, as the number is from 1 to 2*n so the size will be 2*n+1;
        vector<int> fa(n + n + 1);
        vector<int> fb(n + n + 1);
        int f = 1;
        for (int i = 2; i <= n; i++)
        {
            // If the number is changing then update the frequency with the maximum continuous frequency of that number till now
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - f);
                f = i;
            }
        }
        fa[a[n]] = max(fa[a[n]], n - f + 1);

        f = 1;
        for (int i = 2; i <= n; i++)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - f);
                f = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], n - f + 1);

        int ans = 0;
        for (int i = 1; i <= n + n; i++)
        {
            ans = max(ans, fa[i] + fb[i]);
        }
        cout << ans << endl;
    }
    return 0;
}