#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1);
        v[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
        }
        int diff = 2 * (x - v[n]);
        for (int i = 0; i < n; i++)
        {
            diff = max(diff, v[i + 1] - v[i]);
        }
        cout << diff << endl;
    }

    return 0;
}