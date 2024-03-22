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
        int ans = 0, j = 0;
        while (j < n)
        {
            int len = 0;
            while (j < n && v[j] == 0)
            {
                len++;
                j++;
            }
            ans = max(len, ans);
            j++; // Move to the next element
        }
        cout << ans << endl;
    }
    return 0;
}