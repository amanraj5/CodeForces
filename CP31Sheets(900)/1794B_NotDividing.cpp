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
            int n;
            cin >> n;
            if (n == 1)
                v[i] = 2;
            else
                v[i] = n;
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i] % v[i - 1] == 0)
                v[i]++;
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}