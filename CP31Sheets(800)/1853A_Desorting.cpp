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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int diff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                diff = -1;
                break;
            }

            diff = min(diff, abs(v[i] - v[i - 1]));
        }
        if (diff == -1)
            cout << 0 << endl;
        else
        {
            cout << (diff / 2) + 1 << endl;
        }
    }
    return 0;
}