#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
typedef long long ll;
void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    if (m == 1 & n == 1)
    {
        cout << "-1\n";
        return;
    }
    if (m == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            swap(arr[0][i], arr[0][i + 1]);
        }
    }
    else if (n == 1)
    {
        for (int i = 0; i < m - 1; i++)
        {
            swap(arr[i][0], arr[i + 1][0]);
        }
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
        {
            vector<int> temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
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