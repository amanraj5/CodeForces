#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int len = n / k;
    char ans[len][len];
    int row = 0, col = 0;
    for (int i = 0; i < n; i += k)
    {
        for (int j = 0; j < n; j += k)
        {
            ans[row][col++] = arr[i][j];
        }
        row++;
        col=0;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
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