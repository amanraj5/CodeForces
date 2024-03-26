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
        bool ans = false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], v[j]) <= 2)
                {
                    ans = true;
                    break;
                }
            }
        }
        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}