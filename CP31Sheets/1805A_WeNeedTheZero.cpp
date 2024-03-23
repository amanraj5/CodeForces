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
        int xr = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            xr ^= num;
        }
        if (xr == 0)
            cout << 0 << endl;
        else
        {
            if (n % 2 == 1)
                cout << xr << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}